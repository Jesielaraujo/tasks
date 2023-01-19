#include "gestao_estoque.h"
#include "ui_gestao_estoque.h"
#include <QtSql>

gestao_estoque::gestao_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_estoque)
{
    ui->setupUi(this);
    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO", "Erro ao abrir o banco de dados");
       }else{

        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(query.exec()){

      }else{
             QMessageBox::warning(this,"ERRO", "Erro ao listar proodutos");
           }
   }
    ui->tw_ge_produtos->setColumnCount(2);
}

gestao_estoque::~gestao_estoque()
{
    delete ui;
    con.fechar();
}

void gestao_estoque::on_btn_novoproduto_clicked()//produtonovo
{
    ui->txt_codigodoproduto->clear();
    ui->txt_descricao->clear();
    ui->txt_fornecedor->clear();
    ui->txt_valordevenda->clear();
    ui->txt_valorcompra->clear();
    ui->txt_qtdestoque->clear();
    ui->txt_codigodoproduto->setFocus();
}


void gestao_estoque::on_btn_gravraproduto_clicked()//funcao para armazenar as informacoes do  produto no banco de dados
{

        //QString aux;

        QString codigo= ui->txt_codigodoproduto->text();
        QString produto= ui->txt_descricao->text();
        QString fornecedor = ui->txt_fornecedor->text();
        QString quantidade = ui->txt_qtdestoque->text();
        QString valcompra= ui->txt_valorcompra->text();
        QString valvenda= ui->txt_valordevenda->text();

        valvenda.replace(QString(","),QString("."));
        valcompra.replace(QString(","),QString("."));

        QSqlQuery query;
        query.prepare("insert into tb_produtos (id_produto,produto,id_fornecedores,qtde_estoque,valor_compra,valor_venda) values"
                      "("+QString::number(codigo.toInt())+",'"+produto+"',"+QString::number(fornecedor.toInt())+","+QString::number(quantidade.toInt())+","+QString::number(valcompra.toFloat())+","+QString::number(valvenda.toFloat())+")");
        //inserindo os produtos no Banco de dados


        if(!query.exec()){
            QMessageBox::warning(this,"ERRO","Erro ao inserir o Produto");

        }else{
            QMessageBox::information(this,"Inserido","Produto inserido com sucesso");
            ui->txt_codigodoproduto->clear();
            ui->txt_descricao->clear();
            ui->txt_fornecedor->clear();
            ui->txt_valordevenda->clear();
            ui->txt_valorcompra->clear();
            ui->txt_qtdestoque->clear();
            ui->txt_codigodoproduto->setFocus();
        }


}


void gestao_estoque::on_tabWidget_currentChanged(int index)//aba de gestao produtos
{
    if(index ==1){
        removerlinhas(ui->tw_ge_produtos);
        int contlinha=0;
        //remover os produtos do tablewidgets
        QSqlQuery query;
        query.prepare("select id_produto,produto from tb_produtos order by produto");
        if(query.exec()){
            while(query.next()){
              ui->tw_ge_produtos->insertRow(contlinha);
              ui->tw_ge_produtos->setItem(contlinha,0, new QTableWidgetItem(query.value(0).toString()));
              ui->tw_ge_produtos->setItem(contlinha,1, new QTableWidgetItem(query.value(1).toString()));
              ui->tw_ge_produtos->setRowHeight(contlinha,20);//tamanho
              contlinha++;
            }//adicionando o tamanho da linha
            ui->tw_ge_produtos->setColumnWidth(0,150);
            ui->tw_ge_produtos->setColumnWidth(1,230);
            QStringList cabecalho ={"Código", "Produto"};
            ui->tw_ge_produtos->setHorizontalHeaderLabels(cabecalho);
            ui->tw_ge_produtos->setStyleSheet("QTableview{selection-background-color:red}");
            ui->tw_ge_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);//desabilitar a edição
            ui->tw_ge_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_ge_produtos->verticalHeader()->setVisible(false);
        }else{
            QMessageBox::warning(this,"ERRO","Erro Ao listar produtos");
        }
    }
}

void gestao_estoque::removerlinhas(QTableWidget *tw)
{
    while(tw ->rowCount()>0){
        tw->removeRow(0);
    }


}

void gestao_estoque::on_tw_ge_produtos_itemSelectionChanged()
{
    int id =ui->tw_ge_produtos->item(ui->tw_ge_produtos->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_produtos where id_produto="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_ge_codigoproduto->setText(query.value(0).toString());
        ui->txt_ge_produto->setText(query.value(0).toString());
        ui->txt_ge_fornecedor->setText(query.value(0).toString());
        ui->txt_ge_quantidade->setText(query.value(0).toString());
        ui->txt_ge_valorcompra->setText(query.value(0).toString());
        ui->txt_ge_valorvenda->setText(query.value(0).toString());
    }
}


#include "vender.h"
#include "ui_vender.h"
#include<QMessageBox>

VENDER::VENDER(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VENDER)
{
    ui->setupUi(this);
    if(con.abert()){
       if(con.abrir()){
        QMessageBox::warning(this,"ERRO", "ERRO AO ABRIR BANCO DE DADOS");
     }
    }

    ui->tw_listprodutos->setColumnCount(5);//adicionando coluna na tabela
    ui->tw_listprodutos->setColumnWidth(0,100);
    ui->tw_listprodutos->setColumnWidth(1,200);
    ui->tw_listprodutos->setColumnWidth(2,100);
    ui->tw_listprodutos->setColumnWidth(3,100);
    ui->tw_listprodutos->setColumnWidth(4,100);
    QStringList cabecalhos={"Código", "Produto", "Valor Uni.", "Qtde", "Total"};
    ui->tw_listprodutos->setHorizontalHeaderLabels(cabecalhos);
    ui->txt_codprod->setFocus();
    ui->tw_listprodutos->setStyleSheet("QTableView{selection-background-color:red;}");
    ui->tw_listprodutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_listprodutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listprodutos->verticalHeader()->setVisible(false);//desabilitando o curso na tabela
}

VENDER::~VENDER()
{
    delete ui;
}

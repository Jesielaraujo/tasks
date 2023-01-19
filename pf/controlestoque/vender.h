#ifndef VENDER_H
#define VENDER_H

#include <QDialog>
#include"Conexao.h"

namespace Ui {
class VENDER;
}

class VENDER : public QDialog
{
    Q_OBJECT

public:
    explicit VENDER(QWidget *parent = nullptr);
    ~VENDER();
    Conexao con;

private:
    Ui::VENDER *ui;
};

#endif // VENDER_H

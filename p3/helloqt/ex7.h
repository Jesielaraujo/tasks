#ifndef EX7_H
#define EX7_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ex7; }
QT_END_NAMESPACE

class ex7 : public QMainWindow
{
    Q_OBJECT

public:
    ex7(QWidget *parent = nullptr);
    ~ex7();

private:
    Ui::ex7 *ui;
};
#endif // EX7_H

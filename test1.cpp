#include "test1.h"
#include "ui_test1.h"
#include "ui_test2.h"
#include <QAction>

Test1::Test1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Test1)
{
    ui->setupUi(this);
}
Test1::~Test1()
{
    delete ui;
}

void Test1::OkClicked2()
{
    if (check->isChecked())
        mins = t.elapsed();
        mins/=1000;
}

void Test1::OkClicked()
{
    if (start->isChecked()){
        QTime t;
        t.start();
        Ui_Test2 *c = new Ui_Test2();
        QDialog *wnc = new QDialog;

        c ->setupUi(wnc);
        wnc ->show();
    }
}

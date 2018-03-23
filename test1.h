#ifndef TEST1_H
#define TEST1_H

#include <QMainWindow>
namespace Ui {
class Test1;
}

class Test1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Test1(QDialog *parent = 0);
    ~Test1();
    void OkClicked();
    void OkClicked2();

private:
    Ui::Test1 *ui;
};

#endif // TEST1_H

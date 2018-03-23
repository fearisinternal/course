#include <QApplication>
#include <QLabel>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QString>
#include <QTime>
#include <QPushButton>
#include <test1.h>
#include <ui_test1.h>
#include <ui_test2.h>

int mins =0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ui_Test1 *but = new Ui_Test1();
    QMainWindow *wnd = new QMainWindow;

    but ->setupUi(wnd);
    wnd ->show();

    /*QFile file("D:/Programming/Test2/file.txt");
    file.open(QIODevice::ReadOnly);
    QString orig;
    orig = file.readAll();
    file.close();

    QChar data2;
    int i=0, ans = 0;
    while (i<orig.size()){
        cin >> data2;
        if (orig[i]!=data2) ans++;
            i++;
    }
*/

    return a.exec();
}

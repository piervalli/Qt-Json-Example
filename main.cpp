#include "mainwindow.h"
#include <QApplication>
#include "log.h"
//http://doc.qt.io/qt-5/qtglobal.html#qSetMessagePattern
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qSetMessagePattern("%{time yyyy-MM-dd h:mm:ss.zzz t} %{category} %{function} %{line} %{message}");
    QLoggingCategory::setFilterRules("*.debug=false\nparser.debug=true");
    MainWindow w;
    w.show();

    return a.exec();
}

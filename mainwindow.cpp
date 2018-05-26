#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qCDebug(parser) << "sss";
    QLoggingCategory::setFilterRules("*.debug=false\nparser.debug=false");
    qCDebug(parser) << "sss";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_load_clicked()
{

}

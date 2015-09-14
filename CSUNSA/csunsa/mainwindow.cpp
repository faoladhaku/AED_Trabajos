#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>
using namespace std;

#include "table.h"

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    courses = new Table<Record>("dbcourses.csv");
    prerequisites = new Table<Record>("dbprerequisites.csv");
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SearchButton_clicked()
{
    qDebug()<<ui->CodLE->text();
    ui->myTable->setRowCount(8);
    QTableWidgetItem *nuevo=new QTableWidgetItem("fde",3);
    QTableWidgetItem *nuevo2=new QTableWidgetItem("fdwe",4);
    ui->myTable->setItem(0,0,nuevo);
    ui->myTable->setItem(0,1,nuevo2);

    qDebug()<<ui->CodLE->text();
    QByteArray ba = ui->CodLE->text().toLatin1();
    char *h = ba.data();
    //char* h=(char*)ui->CodLE->text();

    courses->index();
    courses->GetRecord(h);

    prerequisites->index();
    prerequisites->GetRecord(h);
}
void MainWindow::on_AddButton_clicked()
{
}

void MainWindow::on_FindButton_clicked()
{

}

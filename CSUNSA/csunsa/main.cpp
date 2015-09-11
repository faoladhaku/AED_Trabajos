#include "mainwindow.h"
#include <QApplication>

#include <iostream>
using namespace std;

#include "table.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;



    Table<Record> courses("dbcourses.csv");
    Table<Record> prerequisites("dbprerequisites.csv");

    char* h= "1003125";

    courses.index();
    courses.GetRecord(h);


    /*prerequisites.index();
    char elem[5];
    //table.printKey();
    while(true){
        cin >> elem;
        courses.GetRecord(elem);
    }*/

    //w.show();


    return a.exec();
}

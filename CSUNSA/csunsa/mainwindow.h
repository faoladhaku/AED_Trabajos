#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "table.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_SearchButton_clicked();

    void on_AddButton_clicked();

    void on_FindButton_clicked();

private:
    Ui::MainWindow *ui;
    Table<Record>* courses;
    Table<Record>* prerequisites;
};

#endif // MAINWINDOW_H

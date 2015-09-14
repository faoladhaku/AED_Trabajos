/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *CodLE;
    QLabel *label_2;
    QLineEdit *NameLE;
    QLabel *label_3;
    QLineEdit *CredLE;
    QLabel *label_4;
    QLineEdit *HTLE;
    QLabel *label_5;
    QLineEdit *HPLE;
    QLabel *label_6;
    QLineEdit *HLLE;
    QPushButton *AddButton;
    QPushButton *FindButton;
    QTableWidget *myTable;
    QLabel *label_7;
    QPushButton *SearchButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(873, 722);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(231, 231, 231, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 61, 50));
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(100, 100));
        CodLE = new QLineEdit(centralWidget);
        CodLE->setObjectName(QStringLiteral("CodLE"));
        CodLE->setGeometry(QRect(290, 40, 113, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 90, 47, 13));
        NameLE = new QLineEdit(centralWidget);
        NameLE->setObjectName(QStringLiteral("NameLE"));
        NameLE->setGeometry(QRect(290, 90, 113, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 140, 47, 13));
        CredLE = new QLineEdit(centralWidget);
        CredLE->setObjectName(QStringLiteral("CredLE"));
        CredLE->setGeometry(QRect(290, 140, 113, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 190, 47, 13));
        HTLE = new QLineEdit(centralWidget);
        HTLE->setObjectName(QStringLiteral("HTLE"));
        HTLE->setGeometry(QRect(260, 190, 31, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 190, 47, 13));
        HPLE = new QLineEdit(centralWidget);
        HPLE->setObjectName(QStringLiteral("HPLE"));
        HPLE->setGeometry(QRect(340, 190, 31, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 190, 47, 13));
        HLLE = new QLineEdit(centralWidget);
        HLLE->setObjectName(QStringLiteral("HLLE"));
        HLLE->setGeometry(QRect(430, 190, 31, 21));
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(560, 40, 80, 21));
        AddButton->setAutoDefault(false);
        FindButton = new QPushButton(centralWidget);
        FindButton->setObjectName(QStringLiteral("FindButton"));
        FindButton->setGeometry(QRect(560, 80, 80, 21));
        myTable = new QTableWidget(centralWidget);
        if (myTable->columnCount() < 6)
            myTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        myTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        myTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        myTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        myTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        myTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        myTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (myTable->rowCount() < 1)
            myTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        myTable->setVerticalHeaderItem(0, __qtablewidgetitem6);
        myTable->setObjectName(QStringLiteral("myTable"));
        myTable->setGeometry(QRect(110, 330, 621, 151));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 290, 211, 31));
        QFont font;
        font.setFamily(QStringLiteral("Miriam Fixed"));
        font.setPointSize(17);
        label_7->setFont(font);
        SearchButton = new QPushButton(centralWidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(440, 40, 80, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 540, 31, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 540, 31, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 540, 31, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 540, 31, 21));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Malla Curricular", 0));
        label->setText(QApplication::translate("MainWindow", "Cod. Curso", 0));
        label_2->setText(QApplication::translate("MainWindow", "Nombre", 0));
        label_3->setText(QApplication::translate("MainWindow", "Creditos", 0));
        label_4->setText(QApplication::translate("MainWindow", "HT", 0));
        label_5->setText(QApplication::translate("MainWindow", "HP", 0));
        label_6->setText(QApplication::translate("MainWindow", "HL", 0));
        AddButton->setText(QApplication::translate("MainWindow", "Add", 0));
        FindButton->setText(QApplication::translate("MainWindow", "Find", 0));
        QTableWidgetItem *___qtablewidgetitem = myTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "C\303\263digo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = myTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem2 = myTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Creditos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = myTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "HT", 0));
        QTableWidgetItem *___qtablewidgetitem4 = myTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "HP", 0));
        QTableWidgetItem *___qtablewidgetitem5 = myTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "HL", 0));
        QTableWidgetItem *___qtablewidgetitem6 = myTable->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "1", 0));
        label_7->setText(QApplication::translate("MainWindow", "PRE-REQUISITOS", 0));
        SearchButton->setText(QApplication::translate("MainWindow", "Search", 0));
        pushButton->setText(QApplication::translate("MainWindow", "<<", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "<<|", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", ">>", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "|>>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

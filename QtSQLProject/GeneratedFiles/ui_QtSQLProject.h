/********************************************************************************
** Form generated from reading UI file 'QtSQLProject.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSQLPROJECT_H
#define UI_QTSQLPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSQLProjectClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *email_obj;
    QLineEdit *surnameEdit;
    QPushButton *name_obj;
    QLineEdit *phoneEdit;
    QPushButton *surname_obj;
    QLineEdit *nameEdit;
    QLineEdit *emailEdit;
    QPushButton *phone_obj;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSplitter *splitter;
    QPushButton *id_obj;
    QLineEdit *idEdit;
    QTextBrowser *textBrowser;
    QLineEdit *data_base_lineEdit;
    QLineEdit *host_name_lineEdit;
    QLineEdit *data_base_name_lineEdit;
    QLineEdit *user_name_lineEdit;
    QLineEdit *port_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *pushButton_connection;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtSQLProjectClass)
    {
        if (QtSQLProjectClass->objectName().isEmpty())
            QtSQLProjectClass->setObjectName(QString::fromUtf8("QtSQLProjectClass"));
        QtSQLProjectClass->resize(1094, 579);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        QtSQLProjectClass->setFont(font);
        QtSQLProjectClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(QtSQLProjectClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 300, 311, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: #0ee10e;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 15px;\n"
"}\n"
"QPushButton:hover:!pressed {  \n"
"border: 3px solid  #060606 ;      }"));
        pushButton_2->setAutoRepeat(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 481, 261));
        QFont font2;
        font2.setPointSize(15);
        layoutWidget->setFont(font2);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        email_obj = new QPushButton(layoutWidget);
        email_obj->setObjectName(QString::fromUtf8("email_obj"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        email_obj->setFont(font3);
        email_obj->setCursor(QCursor(Qt::PointingHandCursor));
        email_obj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(email_obj, 7, 0, 1, 1);

        surnameEdit = new QLineEdit(layoutWidget);
        surnameEdit->setObjectName(QString::fromUtf8("surnameEdit"));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(false);
        font4.setWeight(50);
        surnameEdit->setFont(font4);
        surnameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(surnameEdit, 4, 1, 1, 1);

        name_obj = new QPushButton(layoutWidget);
        name_obj->setObjectName(QString::fromUtf8("name_obj"));
        name_obj->setFont(font3);
        name_obj->setCursor(QCursor(Qt::PointingHandCursor));
        name_obj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(name_obj, 2, 0, 1, 1);

        phoneEdit = new QLineEdit(layoutWidget);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setFont(font4);
        phoneEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(phoneEdit, 5, 1, 1, 1);

        surname_obj = new QPushButton(layoutWidget);
        surname_obj->setObjectName(QString::fromUtf8("surname_obj"));
        surname_obj->setFont(font3);
        surname_obj->setCursor(QCursor(Qt::PointingHandCursor));
        surname_obj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(surname_obj, 4, 0, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFont(font4);
        nameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(nameEdit, 2, 1, 1, 1);

        emailEdit = new QLineEdit(layoutWidget);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setFont(font4);
        emailEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"border-radius: 5px; \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));

        gridLayout->addWidget(emailEdit, 7, 1, 1, 1);

        phone_obj = new QPushButton(layoutWidget);
        phone_obj->setObjectName(QString::fromUtf8("phone_obj"));
        phone_obj->setFont(font3);
        phone_obj->setCursor(QCursor(Qt::PointingHandCursor));
        phone_obj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));

        gridLayout->addWidget(phone_obj, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(700, 150, 311, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_6->setFont(font5);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 90, 311, 51));
        pushButton->setFont(font5);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(700, 30, 311, 51));
        pushButton_4->setFont(font5);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(700, 210, 311, 51));
        pushButton_3->setFont(font5);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	border-color: rgb(0, 255, 0);\n"
"    background: #1535f4;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"    border-radius: 5px;\n"
"  \n"
"\n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(30, 470, 386, 50));
        splitter->setOrientation(Qt::Horizontal);
        id_obj = new QPushButton(splitter);
        id_obj->setObjectName(QString::fromUtf8("id_obj"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        font6.setStrikeOut(false);
        id_obj->setFont(font6);
        id_obj->setCursor(QCursor(Qt::PointingHandCursor));
        id_obj->setAutoFillBackground(false);
        id_obj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: red;\n"
"    color: #fff; \n"
"    padding: 10px; \n"
"  \n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 3px solid  #060606 ;      }"));
        splitter->addWidget(id_obj);
        idEdit = new QLineEdit(splitter);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setFont(font4);
        idEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{ \n"
"border: 3px solid  #060606 ;\n"
"background:white;\n"
"}"));
        splitter->addWidget(idEdit);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(700, 280, 311, 241));
        textBrowser->setStyleSheet(QString::fromUtf8("textBrowser\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        data_base_lineEdit = new QLineEdit(centralWidget);
        data_base_lineEdit->setObjectName(QString::fromUtf8("data_base_lineEdit"));
        data_base_lineEdit->setGeometry(QRect(550, 290, 113, 20));
        data_base_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"background:white;\n"
"}"));
        host_name_lineEdit = new QLineEdit(centralWidget);
        host_name_lineEdit->setObjectName(QString::fromUtf8("host_name_lineEdit"));
        host_name_lineEdit->setGeometry(QRect(550, 320, 113, 20));
        host_name_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"background:white;\n"
"}"));
        data_base_name_lineEdit = new QLineEdit(centralWidget);
        data_base_name_lineEdit->setObjectName(QString::fromUtf8("data_base_name_lineEdit"));
        data_base_name_lineEdit->setGeometry(QRect(550, 350, 113, 20));
        data_base_name_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"background:white;\n"
"}"));
        user_name_lineEdit = new QLineEdit(centralWidget);
        user_name_lineEdit->setObjectName(QString::fromUtf8("user_name_lineEdit"));
        user_name_lineEdit->setGeometry(QRect(550, 380, 113, 20));
        user_name_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"background:white;\n"
"}"));
        port_lineEdit = new QLineEdit(centralWidget);
        port_lineEdit->setObjectName(QString::fromUtf8("port_lineEdit"));
        port_lineEdit->setGeometry(QRect(550, 410, 113, 20));
        port_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"background:white;\n"
"}"));
        password_lineEdit = new QLineEdit(centralWidget);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(550, 440, 113, 20));
        password_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"background:white;\n"
"}"));
        pushButton_connection = new QPushButton(centralWidget);
        pushButton_connection->setObjectName(QString::fromUtf8("pushButton_connection"));
        pushButton_connection->setGeometry(QRect(560, 480, 91, 23));
        pushButton_connection->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: red;\n"
"    color: #fff; \n"
"  \n"
"   }\n"
" QPushButton:hover:!pressed {  background: #fa0707;\n"
"border: 2px solid  #060606 ;      }"));
        QtSQLProjectClass->setCentralWidget(centralWidget);
        splitter->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        layoutWidget->raise();
        pushButton_6->raise();
        textBrowser->raise();
        data_base_lineEdit->raise();
        host_name_lineEdit->raise();
        data_base_name_lineEdit->raise();
        user_name_lineEdit->raise();
        port_lineEdit->raise();
        password_lineEdit->raise();
        pushButton_connection->raise();
        mainToolBar = new QToolBar(QtSQLProjectClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtSQLProjectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtSQLProjectClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtSQLProjectClass->setStatusBar(statusBar);
        QWidget::setTabOrder(name_obj, surname_obj);
        QWidget::setTabOrder(surname_obj, phone_obj);
        QWidget::setTabOrder(phone_obj, email_obj);
        QWidget::setTabOrder(email_obj, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_3);
        QWidget::setTabOrder(pushButton_3, id_obj);
        QWidget::setTabOrder(id_obj, nameEdit);
        QWidget::setTabOrder(nameEdit, surnameEdit);
        QWidget::setTabOrder(surnameEdit, phoneEdit);
        QWidget::setTabOrder(phoneEdit, emailEdit);
        QWidget::setTabOrder(emailEdit, idEdit);
        QWidget::setTabOrder(idEdit, textBrowser);

        retranslateUi(QtSQLProjectClass);

        QMetaObject::connectSlotsByName(QtSQLProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtSQLProjectClass)
    {
        QtSQLProjectClass->setWindowTitle(QCoreApplication::translate("QtSQLProjectClass", "\320\243\321\207\320\265\321\202\320\275\320\260\321\217 \320\261\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        email_obj->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\277\320\276\321\207\321\202\320\265", nullptr));
        surnameEdit->setText(QString());
        name_obj->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270", nullptr));
        surname_obj->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270", nullptr));
        phone_obj->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\321\217 \320\262\320\262\320\276\320\264\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("QtSQLProjectClass", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276 ID", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\276\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QtSQLProjectClass", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        id_obj->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID", nullptr));
        idEdit->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("QtSQLProjectClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\224\320\260\320\275\320\275\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\321\217\320\265\321\202 \321\201\320\276\320\261\320\276\320\271 \320\277\321\200\320\276\321\201\321\202\321\203\321\216 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent"
                        ":0px;\"><span style=\" font-size:9pt;\">1)\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\270\320\274\320\265\320\275\320\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203</span></p>\n"
"<p style=\" ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">- \320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\277\320\276\321\207\321\202\320\265</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">2)\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">3)\320\247\321\202\320\276\320\261\321\213 \320\275\320\260\320\271\321\202\320\270 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321"
                        "\217 \320\277\320\276 ID (\321\203\320\275\320\270\320\272\320\260\320\273\321\214\320\275\320\276\320\274\321\203 \320\270\320\275\320\264\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200\321\203), \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 ID \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">4)\320\247\321\202\320\276\320\261\321\213 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214, \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\262 \320\277\320\276\320\273\320\265 &quot;\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 ID&quot;</span></p>\n"
"<p style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\320\265\320\263\320\276 \320\275\320\276\320\274\320\265\321\200 \320\270 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 &quot;\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214 \320\277\320\276 ID&quot; \320\275\320\260 \320\277\320\260\320\275\320\265\320\273\320\270 \321\201\320\277\321\200\320\260\320\262\320\260</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        data_base_lineEdit->setText(QCoreApplication::translate("QtSQLProjectClass", "QMYSQL", nullptr));
        host_name_lineEdit->setText(QCoreApplication::translate("QtSQLProjectClass", "127.0.0.1", nullptr));
        data_base_name_lineEdit->setText(QCoreApplication::translate("QtSQLProjectClass", "data_base", nullptr));
        user_name_lineEdit->setText(QCoreApplication::translate("QtSQLProjectClass", "root", nullptr));
        port_lineEdit->setText(QCoreApplication::translate("QtSQLProjectClass", "3306", nullptr));
        password_lineEdit->setText(QCoreApplication::translate("QtSQLProjectClass", "login13", nullptr));
        pushButton_connection->setText(QCoreApplication::translate("QtSQLProjectClass", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtSQLProjectClass: public Ui_QtSQLProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSQLPROJECT_H

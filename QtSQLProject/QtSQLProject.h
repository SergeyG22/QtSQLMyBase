#pragma once

#include <iostream>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquery.h>
#include <QtSql/qsqltablemodel.h>
#include <QtSql/qsqlerror.h>
#include <QtSql/qsqlrecord.h>
#include <QtCore/qdebug.h>
#include <QtWidgets/qmessagebox.h>
#include <QtWidgets/qheaderview.h>
#include <QtWidgets/qlineedit.h>
#include <QtGui/qevent.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qtableview.h>
#include "ui_QtSQLProject.h"




class QtSQLProject : public QMainWindow 
{
	Q_OBJECT
public:
	QtSQLProject(QWidget *parent = Q_NULLPTR);
	QLabel image_pix;
private:
	Ui::QtSQLProjectClass ui;
	QSqlQueryModel model;
	QSqlDatabase db;
	QSqlQuery query;
	QString surname;
	QString name;
	QString email;
	QString phone;
	QString name_seach;
	QString message;
	QString k = '\'';
	QMessageBox clear_db;
	QMessageBox add_db;
	QMessageBox msg_not_found;
	QMessageBox drop_table;
	QMessageBox incorrect_editline;
	QTableView view;
	QString surname_="surname =";
	QString name_ = "name =";
	QString email_="email =";
	QString phone_="phone =";
	QString OR = " OR ";
	QString id_seach;
	int ret;
public slots:
	void add_in_table();
	void seach_name();
	void seach_surname();
	void seach_email();
	void seach_phone();
	void seach_id();
	void clear_table();
	void clear_form();
	void clear_id();
	void show_table();
};


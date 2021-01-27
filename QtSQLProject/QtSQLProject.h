#pragma once

#include <iostream>
#include <fstream>
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


class IDBFromTextFile {
	std::string text;
	QList<QString>parameters;
	std::fstream in {"DataBaseConfig/databaseconfig.txt"};
public:
	IDBFromTextFile() {
		if (in.is_open()) {			
			while (getline(in, text)) {
				parameters.push_back(QString::fromStdString(text));
			}
		}
		else {
			std::cout << "error opening a text file\n";
		}
	}
	QList<QString>get_parameters_db() { return parameters; };
};


class IDBConnectionConfig {
public:
	virtual ~IDBConnectionConfig() { };
	virtual QSqlDatabase data_base_parameters() = 0;
};

class IDBConnectionFromTextFile: public IDBConnectionConfig {
	QSqlDatabase db;
	IDBFromTextFile info;
public:
	QSqlDatabase data_base_parameters() override;
};


struct InputInformation {
	QString surname;
	QString name;
	QString email;
	QString phone;
	QString name_seach;
};

struct MessageBoxInformation {
	QMessageBox clear_db;
	QMessageBox add_db;
	QMessageBox msg_not_found;
	QMessageBox drop_table;
};

struct SqlParameters {
	QSqlQueryModel model;
	QSqlDatabase db;
	QSqlQuery query;
};

class QtSQLProject: public QMainWindow,InputInformation,MessageBoxInformation, SqlParameters{
	Q_OBJECT
	Ui::QtSQLProjectClass ui;	
	QTableView view;
	IDBConnectionFromTextFile* connection_from_text_file = nullptr;
public:
	QtSQLProject(QWidget *parent = Q_NULLPTR);
	~QtSQLProject();	
public slots:
	void connect_to_database();
	void add_to_the_table();
	void find_name();
	void find_surname();
	void find_email();
	void find_phone();
	void find_id();
	void clear_table();
	void clear_form();
	void clear_id();
	void show_table();
};


#include "QtSQLProject.h"



QtSQLProject::QtSQLProject(QWidget *parent) : QMainWindow(parent) {	

	ui.setupUi(this);
	ui.centralWidget->setStyleSheet("background: grey");
	ui.textBrowser->setStyleSheet("background: white");
	qApp->installEventFilter(this);
	
	connect(ui.name_obj, &QPushButton::clicked,this, &QtSQLProject::find_name);
	connect(ui.surname_obj, &QPushButton::clicked,this, &QtSQLProject::find_surname);
	connect(ui.phone_obj, &QPushButton::clicked,this, &QtSQLProject::find_phone);
	connect(ui.email_obj, &QPushButton::clicked,this, &QtSQLProject::find_email);
	connect(ui.id_obj, &QPushButton::clicked, this, &QtSQLProject::find_id);
	
	connect(ui.pushButton, &QPushButton::clicked, this, &QtSQLProject::clear_id);
	connect(ui.pushButton_2, &QPushButton::clicked,this, &QtSQLProject::add_to_the_table);
	connect(ui.pushButton_3, &QPushButton::clicked,this, &QtSQLProject::clear_table);
	connect(ui.pushButton_4, &QPushButton::clicked, this, &QtSQLProject::show_table);
	connect(ui.pushButton_6, &QPushButton::clicked,this, &QtSQLProject::clear_form);
	
	connect(ui.pushButton_connection,&QPushButton::clicked,this, &QtSQLProject::connect_to_database);

	ui.pushButton->setToolTip(QString::fromLocal8Bit("Введите в поле номер ID и нажмите 'удалить запись по ID' для удаления записи"));
	ui.pushButton_3->setToolTip(QString::fromLocal8Bit("Удаляет все записи из базы данных"));
	ui.pushButton_4->setToolTip(QString::fromLocal8Bit("Нажмите чтобы отобразить все имеющиеся записи"));
	ui.pushButton_6->setToolTip(QString::fromLocal8Bit("Очищает поля ввода"));
	

	connection_from_text_file = new IDBConnectionFromTextFile;
	db = connection_from_text_file->data_base_parameters();

	if (!db.open()) {
		qDebug() << db.lastError().text();
		std::cout << "error connecting to the database\n";
	}
	else {
		QMessageBox msgBox;
		msgBox.setText(QString::fromLocal8Bit("Подключение к базе данных установлено!"));
		msgBox.exec();
	}
	
}
	
QtSQLProject::~QtSQLProject(){
	delete connection_from_text_file;
}


void QtSQLProject::add_to_the_table() {

	QMessageBox incorrect_editline;

	if (!ui.nameEdit->text().isEmpty()) {
		name = ui.nameEdit->text();
	}
	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле имя не должно быть пустым"));
		incorrect_editline.exec();
		return;
	}

	if (!ui.surnameEdit->text().isEmpty()) {
		surname = ui.surnameEdit->text();
	}
	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле фамилия не должно быть пустым"));
		incorrect_editline.exec();
		return;		
	}
	
	if (!ui.phoneEdit->text().isEmpty()) {
		phone = ui.phoneEdit->text();
	}
	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле телефон не должно быть пустым"));
		incorrect_editline.exec();
		return;
	}

	if (!ui.emailEdit->text().isEmpty()) {
		email = ui.emailEdit->text();
	}
	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле почта не должно быть пустым"));		
		incorrect_editline.exec();
		return;
	}

	query = QSqlQuery(db);
	query.prepare("INSERT INTO addressbook (name,surname, phone, email)"
		"VALUES(:name,:surname, :phone, :email);");
	
	query.bindValue(":name", name);
	query.bindValue(":surname", surname);
	query.bindValue(":phone", phone);
	query.bindValue(":email", email);

	if (!query.exec()) {
		qDebug() << query.lastError().databaseText();		
	}
	while (query.next()) {		
		qDebug() << query.value(0).toString();		
	}
	
	if (!ui.nameEdit->text().isEmpty() || !ui.surnameEdit->text().isEmpty() || !ui.emailEdit->text().isEmpty() || !ui.phoneEdit->text().isEmpty()) {
		add_db.setText(QString::fromLocal8Bit("Значения добавлены!"));
		add_db.exec();
		ui.nameEdit->text().clear();
		ui.surnameEdit->text().clear();
		ui.emailEdit->text().clear();
		ui.phoneEdit->text().clear();
	}	
}


void QtSQLProject::find_name() {
	 query = QSqlQuery(db);	
	 name_seach = "SELECT * FROM addressbook WHERE name = " + '\'' + ui.nameEdit->text() + '\'';
	 QString message = QString::fromLocal8Bit(" - значение не найдено");
	 model.setQuery(name_seach);
	 view.setModel(&model);
	 
	 if (!query.exec(name_seach)) {
		 qDebug() << query.lastError().databaseText();	
	 }
	
	 while (query.next()) {
		 view.show();
		 return;			
	 }

	 if (!ui.nameEdit->text().isEmpty()) {
		 msg_not_found.setText(ui.nameEdit->text() + message);
		 msg_not_found.exec();
	 }
}

void QtSQLProject::clear_table() {
	drop_table.setText(QString::fromLocal8Bit("Удалить все записи?"));
	drop_table.setIcon(QMessageBox::Warning);
	drop_table.setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
	drop_table.setDefaultButton(QMessageBox::Ok);

	switch (drop_table.exec()) {
	case QMessageBox::Cancel: {
		break;
	}
	case QMessageBox::Ok: {
		query = QSqlQuery(db);
		if (!query.exec("TRUNCATE TABLE addressbook")) {
			qDebug() << query.lastError().databaseText();
		}
		while (query.next()) {
			qDebug() << query.value(0).toString();
		}
		clear_db.setText(QString::fromLocal8Bit("Все записи удалены!"));
		clear_db.exec();
		break;
	}
 }	 
}

void QtSQLProject::clear_form() {	
	ui.nameEdit->clear(); 
	ui.surnameEdit->clear();
	ui.phoneEdit->clear();
	ui.emailEdit->clear();
	ui.idEdit->clear();
}

void QtSQLProject::find_surname() {
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook WHERE surname = " + '\'' + ui.surnameEdit->text() + '\'';
	QString message = QString::fromLocal8Bit(" - значение не найдено");

	model.setQuery(name_seach);
	view.setModel(&model);
	
	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()) {
		view.show();
		return;
	}

	if (!ui.surnameEdit->text().isEmpty()) {
		msg_not_found.setText(ui.surnameEdit->text() + message);
		msg_not_found.exec();
	}
}


void QtSQLProject::find_email()  {
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook WHERE email = " + '\'' + ui.emailEdit->text() + '\'';
	QString message = QString::fromLocal8Bit(" - значение не найдено");
	model.setQuery(name_seach);
	view.setModel(&model);
	view.resizeColumnsToContents();
	
	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()) {
		view.show();
		return;
	}

	if (!ui.emailEdit->text().isEmpty()) {
		msg_not_found.setText(ui.emailEdit->text() + message);
		msg_not_found.exec();
	}
}

void QtSQLProject::find_phone() {
	query = QSqlQuery(db);
    name_seach = "SELECT * FROM addressbook WHERE phone = " + '\'' + ui.phoneEdit->text() + '\'';
	QString message = QString::fromLocal8Bit(" - значение не найдено");
	model.setQuery(name_seach);
	view.setModel(&model);
	
	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()) {
		view.show();
		return;
	}

	if (!ui.phoneEdit->text().isEmpty()) {
		msg_not_found.setText(ui.phoneEdit->text() + message);
		msg_not_found.exec();
	}
}

void QtSQLProject::find_id() {
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook WHERE ID = " + ui.idEdit->text();
	QString message = QString::fromLocal8Bit(" - значение не найдено");
	model.setQuery(name_seach);
	view.setModel(&model);

	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()){
		view.show();
		return;
	}

	if (!ui.idEdit->text().isEmpty()) {
		msg_not_found.setText(ui.idEdit->text() + message);
		msg_not_found.exec();
	}
}


void QtSQLProject::clear_id()  {                                                 
	if (!ui.idEdit->text().isEmpty())  {                                            
		drop_table.setText(QString::fromLocal8Bit("Удалить запись?"));
		drop_table.setIcon(QMessageBox::Warning);
		drop_table.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
		drop_table.setDefaultButton(QMessageBox::Ok);

		switch (drop_table.exec()) {
		case QMessageBox::Cancel:
			break;
		case QMessageBox::Ok:
			query = QSqlQuery(db);
			if (!query.exec("DELETE FROM addressbook WHERE ID = " + ui.idEdit->text())) {
				qDebug() << query.lastError().databaseText();
			}
			while (query.next()) {
				qDebug() << query.value(0).toString();
			}
			clear_db.setText(QString::fromLocal8Bit("Запись удалена!"));
			clear_db.exec();
			break;
		}
	}
}


void QtSQLProject::show_table() {	
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook";

	model.setQuery(name_seach);
	view.setModel(&model);

	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()) {
		view.show();
	}
}

void QtSQLProject::connect_to_database(){
	QString data_base = ui.data_base_lineEdit->text();
	QString host_name = ui.host_name_lineEdit->text();
	QString data_base_name = ui.data_base_name_lineEdit->text();
	QString user_name = ui.user_name_lineEdit->text();
	QString password = ui.password_lineEdit->text();
	int port = ui.port_lineEdit->text().toInt();
	
	db = QSqlDatabase::addDatabase(data_base);
	db.setHostName(host_name);
	db.setDatabaseName(data_base_name);
	db.setUserName(user_name);
	db.setPort(port);
	db.setPassword(password);

	if (!db.open()) {
		qDebug() << db.lastError().text();
		std::cout << "error connecting to the database\n";
	}
	else {
		QMessageBox msgBox;
		msgBox.setText(QString::fromLocal8Bit("Подключение к базе данных установлено!"));
		msgBox.exec();
	}
}


QSqlDatabase IDBConnectionFromTextFile::data_base_parameters() {

	QString connetion_parameters[6] = {"data_base","host_name","data_base_name","user_name","password","port" };

	for (int i = 0; i < info.get_parameters_db().size(); ++i) {
		connetion_parameters[i] = info.get_parameters_db().takeAt(i); 
	}

	db = QSqlDatabase::addDatabase(connetion_parameters[0]);
	db.setHostName(connetion_parameters[1]);
	db.setDatabaseName(connetion_parameters[2]);
	db.setUserName(connetion_parameters[3]);
	db.setPort(connetion_parameters[4].toInt());
	db.setPassword(connetion_parameters[5]);
	return db;
}


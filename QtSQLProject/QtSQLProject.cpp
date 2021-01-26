#include "QtSQLProject.h"



QtSQLProject::QtSQLProject(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);
	ui.centralWidget->setStyleSheet("background: grey");
	ui.textBrowser->setStyleSheet("background: white");
	qApp->installEventFilter(this);
	
	connect(ui.name_obj, SIGNAL(clicked()), SLOT(seach_name()));
	connect(ui.surname_obj, SIGNAL(clicked()), SLOT(seach_surname()));
	connect(ui.phone_obj, SIGNAL(clicked()), SLOT(seach_phone()));
	connect(ui.email_obj, SIGNAL(clicked()), SLOT(seach_email()));
	connect(ui.id_obj, SIGNAL(clicked()), SLOT(seach_id()));
	
	connect(ui.pushButton_2, SIGNAL(clicked()), SLOT(add_in_table()));
	connect(ui.pushButton_3, SIGNAL(clicked()), SLOT(clear_table()));
	connect(ui.pushButton_6, SIGNAL(clicked()), SLOT(clear_form()));
	connect(ui.pushButton, SIGNAL(clicked()), SLOT(clear_id()));
	connect(ui.pushButton_4, SIGNAL(clicked()), SLOT(show_table()));

	ui.pushButton->setToolTip(QString::fromLocal8Bit("Введите в поле номер ID и нажмите 'удалить запись по ID' для удаления записи"));
	ui.pushButton_4->setToolTip(QString::fromLocal8Bit("Нажмите чтобы отобразить все имеющиеся записи"));
	ui.pushButton_6->setToolTip(QString::fromLocal8Bit("Очищает поля ввода"));
	ui.pushButton_3->setToolTip(QString::fromLocal8Bit("Удаляет все записи из базы данных"));

	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("192.168.1.163");
	db.setDatabaseName("work_with_book");
	db.setUserName("test"); 
	db.setPort(3306); 
	db.setPassword("login13");

	if (!db.open()) {
		qDebug() << db.lastError().text();
		std::cout << "fatal error\n";
	}	
	else {
		ui.statusBar->showMessage(QString::fromLocal8Bit("Соединение с базой данных установлено!"));
	}
}
	



void QtSQLProject::add_in_table()
{
	if (ui.nameEdit->text().size() > 0) {
		name = ui.nameEdit->text();
	}
	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле имя не должно быть пустым"));
		incorrect_editline.exec();
		return;
	}

	if (ui.surnameEdit->text().size() > 0) {
		surname = ui.surnameEdit->text();
	}

	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле фамилия не должно быть пустым"));
		incorrect_editline.exec();
		return;		
	}

	if (ui.emailEdit->text().size() > 0) {
		email = ui.emailEdit->text();
	}

	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле почта не должно быть пустым"));		
		incorrect_editline.exec();
		return;
	}

	if (ui.phoneEdit->text().size() > 0) {
		phone = ui.phoneEdit->text();
	}

	else {
		incorrect_editline.setText(QString::fromLocal8Bit("Поле телефон не должно быть пустым"));
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
	
	if (ui.nameEdit->text() > 0 || ui.surnameEdit->text() > 0 
		|| ui.emailEdit->text() > 0 || ui.phoneEdit->text() > 0) {
		add_db.setText(QString::fromLocal8Bit("Значения добавлены!"));
		add_db.exec();
		ui.nameEdit->text() = "";
		ui.surnameEdit->text() = "";
		ui.emailEdit->text() = "";
		ui.phoneEdit->text() = "";
	}	
}


void QtSQLProject::seach_name()
{
	 query = QSqlQuery(db);	
	 name_seach = "SELECT * FROM addressbook WHERE name = " + k + ui.nameEdit->text() + k;
	 message = QString::fromLocal8Bit(" - значение не найдено");
	 model.setQuery(name_seach);
	 view.setModel(&model);
	 
	 if (!query.exec(name_seach)) {
		 qDebug() << query.lastError().databaseText();	
	 }
	
	 while (query.next()) {
		 view.show();
		 return;			
	 }

	 if (ui.nameEdit->text().size() > 0) {
		 msg_not_found.setText(ui.nameEdit->text() + message);
		 msg_not_found.exec();
	 }

}

void QtSQLProject::clear_table() {
	drop_table.setText(QString::fromLocal8Bit("Удалить все записи?"));
	drop_table.setIcon(QMessageBox::Warning);
	drop_table.setStandardButtons(QMessageBox::Ok|QMessageBox::Cancel);
	drop_table.setDefaultButton(QMessageBox::Ok);
	ret = drop_table.exec();

	switch (ret) {
	case QMessageBox::Cancel:
		break;
	case QMessageBox::Ok:
		system("cls");
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

void QtSQLProject::clear_form() {	
	ui.nameEdit->setText("");
	ui.surnameEdit->setText("");
	ui.phoneEdit->setText("");
	ui.emailEdit->setText("");
	ui.idEdit->setText("");
}

void QtSQLProject::seach_surname() {
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook WHERE surname = " + k + ui.surnameEdit->text() + k;
	message = QString::fromLocal8Bit(" - значение не найдено");

	model.setQuery(name_seach);
	view.setModel(&model);
	
	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()) {
		view.show();
		return;
	}

	if (ui.surnameEdit->text().size() > 0) {
		msg_not_found.setText(ui.surnameEdit->text() + message);
		msg_not_found.exec();
	}

}


void QtSQLProject::seach_email()  {
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook WHERE email = " + k + ui.emailEdit->text() + k;
	message = QString::fromLocal8Bit(" - значение не найдено");
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

	if (ui.emailEdit->text().size() > 0) {
		msg_not_found.setText(ui.emailEdit->text() + message);
		msg_not_found.exec();
	}

}

void QtSQLProject::seach_phone() {
	query = QSqlQuery(db);
    name_seach = "SELECT * FROM addressbook WHERE phone = " + k + ui.phoneEdit->text() + k;
	message = QString::fromLocal8Bit(" - значение не найдено");
	model.setQuery(name_seach);//--  отображает результат запроса в виде таблицы
	view.setModel(&model);
	
	if (!query.exec(name_seach)) {
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()){
		view.show();
		return;
	}

	if (ui.phoneEdit->text().size() > 0) {
		msg_not_found.setText(ui.phoneEdit->text() + message);
		msg_not_found.exec();
	}
}

void QtSQLProject::seach_id() {
	query = QSqlQuery(db);
	name_seach = "SELECT * FROM addressbook WHERE ID = " + ui.idEdit->text();
	message = QString::fromLocal8Bit(" - значение не найдено");
	model.setQuery(name_seach);
	view.setModel(&model);

	if (!query.exec(name_seach)){
		qDebug() << query.lastError().databaseText();
	}

	while (query.next()){
		view.show();
		return;
	}

	if (ui.idEdit->text().size() > 0) {
		msg_not_found.setText(ui.idEdit->text() + message);
		msg_not_found.exec();
	}
}




void QtSQLProject::clear_id()                                                  // Функция удаления записи по ID
{	
	if (ui.idEdit->text() > 0)  {                                             // Доделать корректность ввода ID и удаления записи 
		drop_table.setText(QString::fromLocal8Bit("Удалить запись?"));
		drop_table.setIcon(QMessageBox::Warning);
		drop_table.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
		drop_table.setDefaultButton(QMessageBox::Ok);
		ret = drop_table.exec();

		switch (ret) {
		case QMessageBox::Cancel:
			break;
		case QMessageBox::Ok:
			system("cls");
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


void QtSQLProject::show_table()
{	
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



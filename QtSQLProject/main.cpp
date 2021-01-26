#include <QtWidgets/QApplication>
#include <QtCore/qtextcodec.h>
#include <iostream>
#include "QtSQLProject.h"


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "russian");
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("Windows-1251"));
	QApplication application(argc, argv);	
	QtSQLProject window;	
	window.show();
	return application.exec();
}

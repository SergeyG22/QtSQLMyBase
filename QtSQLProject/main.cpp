#include "QtSQLProject.h"
#include <QtWidgets/QApplication>
#include <qtextcodec.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "russian");
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("Windows-1251"));
	QApplication a(argc, argv);
	
	
	QtSQLProject w;
	
	w.show();
	return a.exec();
}

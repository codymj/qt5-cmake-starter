#include <QtCore/QObject>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

	QPushButton button( "Hello, World!");
	QObject::connect(&button, SIGNAL(clicked()), &app, SLOT(quit()));
	button.setFixedSize(300,100);
	button.show();

	return QApplication::exec();
}

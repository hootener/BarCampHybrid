#include "SystemNotifier.h"
#include <QIcon>

SystemNotifier::SystemNotifier(QObject * pParent): QSystemTrayIcon(pParent){
	setIcon(QIcon("favicon.ico"));
}

void SystemNotifier::DisplayNotification(QString message){
	showMessage("Hybrid App Test", message);
}
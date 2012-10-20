// System Includes
#include <QSystemTrayIcon>

// Application Includes

// Forward Declarations

class SystemNotifier: public QSystemTrayIcon{
	Q_OBJECT
public:
	SystemNotifier(QObject * pParent = 0);

	Q_SLOT void DisplayNotification(QString message);

};

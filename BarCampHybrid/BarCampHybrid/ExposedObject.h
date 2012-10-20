//System Includes
#include <QObject>
#include <QString>
#include <QDebug>

// Application Includes

// Forward Declarations

class ExposedObject: public QObject{
	Q_OBJECT
public:
	ExposedObject(QObject *pParent = NULL);

	Q_INVOKABLE QString GetSystemVariable(QString varName);

	Q_INVOKABLE void ChangeValue(int val);

	Q_SIGNAL void ValueChanged(int value);
protected:

	QString m_SystemVariableContents;
	int m_Value;
};
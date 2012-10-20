
// System Includes
#include <QWebView>

// Application Includes

// Forward Declaratoins
class QWebInspector;

class SimpleWebView: public QWebView{
	Q_OBJECT
public:
	SimpleWebView(QString homeUrl, QWidget * pParent = NULL);
	Q_SLOT void LoadUrl(QString url);
	Q_SLOT void LoadHome();
	Q_SLOT void RefreshPage();
	Q_SLOT void SendObjectToPage(QString objectName, QObject * pObject);

protected:
	QString m_CurrentUrl;
	QString m_HomeUrl;

	QWebInspector * m_pWebInspector;

	Q_SLOT void UpdateOnPageLoad(bool ok);
};
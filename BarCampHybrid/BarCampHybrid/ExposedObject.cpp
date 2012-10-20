//System Includes

//Application Includes
#include "ExposedObject.h"

ExposedObject::ExposedObject(QObject * pParent):QObject(pParent),
m_Value(0),
m_SystemVariableContents("Not set"){

}


QString ExposedObject::GetSystemVariable(QString varName){
	QString envVarPath = QString();
#ifdef _WIN32 // Windows implementation- mainly for playing nice with Win8
	QByteArray stringData = varName.toUtf8();
	char* pEnvVar = stringData.data();
	size_t envVarSize; // size of the returned variable
	errno_t envVarErrorCode = _dupenv_s(&pEnvVar, &envVarSize, varName.toLatin1()); //error code

	if(envVarErrorCode != 0 || envVarSize == 0) { 
		// Handle error
		// Note: for some reason an unknown variable may return success 
		// with a 0 size value instead of returning an error
		qDebug() << "Unknown system variable " << varName;
		m_SystemVariableContents = "Unknown system variable ";
	}
	else {
		// Print value of the variable
		qDebug() << "Found it! " << varName << ":\t" << pEnvVar;
	}

	//convert the pEnvVar to a QString and return it.
	envVarPath = QString::fromUtf8(pEnvVar);
#else //Everybody else
	envVarPath = getenv(varName.toLatin1());
#endif
	m_SystemVariableContents = envVarPath;
	return envVarPath;
}

void ExposedObject::ChangeValue(int value){
	m_Value = value;
	Q_EMIT(ValueChanged(value));
}
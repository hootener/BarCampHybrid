TEMPLATE   = app
CONFIG	  += qt warn_on no_keywords embed_manifest_exe
QT        += network webkit
TARGET     = BarCampHybrid
SOURCES	   = main.cpp SimpleWebView.cpp MainWindow.cpp ExposedObject.cpp
HEADERS	   = SimpleWebView.h MainWindow.h ExposedObject.h
LIBS      +=

# Treat warnings as errors
win32:QMAKE_CXXFLAGS += /WX
unix:QMAKE_CXXFLAGS += -Werror


CONFIG(debug, debug|release){
	# Debug build options
	# Enable a read-only console window (i.e. for printf etc.)
	# CONFIG   += console
}
else{
	# Release build options
	# Enable a read-only console window (i.e. for printf etc.)
	# CONFIG   += console
}
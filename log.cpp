#include "log.h"
// in one source file
//QtDebugMsg QtInfoMsg QtWarningMsg QtCriticalMsg QtFatalMsg
//http://blog.qt.io/blog/2014/03/11/qt-weekly-1-categorized-logging/
Q_LOGGING_CATEGORY(parser, "parser",QtDebugMsg)
Q_LOGGING_CATEGORY(sql, "sql",QtCriticalMsg)
log::log(QObject *parent) : QObject(parent)
{

}

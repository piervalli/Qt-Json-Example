#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QDebug>
#include <QLoggingCategory>
// in a header
 Q_DECLARE_LOGGING_CATEGORY(parser)
 Q_DECLARE_LOGGING_CATEGORY(sql)
class log : public QObject
{
    Q_OBJECT
public:
    explicit log(QObject *parent = nullptr);

signals:

public slots:
};

#endif // LOG_H

#ifndef LOGGER_H
#define LOGGER_H

#include <QTextEdit>
#include <QString>

class Logger
{
public:
    Logger(QTextEdit *appender);
    QTextEdit* appender();
    void setAppender(QTextEdit *appender);

    void clear();
    void set(const QString& log);
    void setHtml(const QString& log);
    void append(const QString& log);
    void appendHtml(const QString& log);
    void appendHtml(const QString& color, const QString& log);

    void endl();
    void infonl(const QString& log);
    void warnnl(const QString& log);
    void errornl(const QString& log);
    void strongnl(const QString& log);
    void info(const QString& log);
    void warn(const QString& log);
    void error(const QString& log);
    void strong(const QString& log);

private:
    QTextEdit* m_appender;
};

#endif // LOGGER_H

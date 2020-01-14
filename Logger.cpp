#include "Logger.h"

Logger::Logger(QTextEdit *appender)
    : m_appender(appender)
{
}

QTextEdit* Logger::appender()
{
    return  m_appender;
}


void Logger::setAppender(QTextEdit *appender)
{
    m_appender = appender;
}

void Logger::clear()
{
    m_appender->clear();
}

void Logger::set(const QString& log)
{
    m_appender->setText(log);
//    m_appender->setPlainText(log);
}

void Logger::setHtml(const QString& log)
{
    m_appender->setHtml(log);
}

void Logger::append(const QString& log)
{
//    m_appender->insertPlainText(log);
    m_appender->append(log);
}

void Logger::appendHtml(const QString& log)
{
    m_appender->insertHtml(log);
}

void Logger::appendHtml(const QString& color, const QString& log)
{
    static QString html_log("<font color=%1>%2</font>");
    appendHtml(html_log.arg(color).arg(log));

}

void Logger::endl()
{
    appendHtml("<br>");
//    append("\n");
}

void Logger::infonl(const QString& log)
{
    appendHtml("black", "[INFO] " + log);
}
void Logger::warnnl(const QString& log)
{
    appendHtml("GoldenRod", "[WARN] " + log);
}
void Logger::errornl(const QString& log)
{
    appendHtml("red", "[ERROR] " + log);
}

void Logger::strongnl(const QString& log)
{
    appendHtml("blue", "<b>" + log + "</b>");
}

void Logger::info(const QString& log)
{
    infonl(log);
    endl();
}
void Logger::warn(const QString& log)
{
    warnnl(log);
    endl();
}
void Logger::error(const QString& log)
{
    errornl(log);
    endl();
}

void Logger::strong(const QString& log)
{
    strongnl(log);
    endl();
}

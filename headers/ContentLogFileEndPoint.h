#pragma once

class ContentLogFileEndPoint : ContentLogEndPoint {

    virtual ~ContentLogFileEndPoint();
    virtual ~ContentLogFileEndPoint();
    virtual void log(char const*);
    virtual void flush(void);
    virtual void setEnabled(bool);
    virtual void isEnabled(void)const;
    virtual void log(LogArea, LogLevel, char const*);
}

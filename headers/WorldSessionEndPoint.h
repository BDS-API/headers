#pragma once

class WorldSessionEndPoint : ContentLogEndPoint {

    virtual ~WorldSessionEndPoint();
    virtual ~WorldSessionEndPoint();
    virtual void log(char const*);
    virtual void flush(void);
    virtual void setEnabled(bool);
    virtual void isEnabled(void)const;
    virtual void log(LogArea, LogLevel, char const*);
}

#pragma once

class ContentLogEndPoint : Bedrock::LogEndPoint {

    virtual void ~ContentLogEndPoint();
    virtual void ~ContentLogEndPoint();
    virtual void log(char const*);
    virtual void flush(void);
    virtual void setEnabled(bool);
    virtual void isEnabled(void)const;
    virtual void log(LogArea, LogLevel, char const*);
}

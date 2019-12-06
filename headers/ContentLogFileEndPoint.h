#pragma once

class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long ContentLogFileEndPoint::FILE_NAME;

    virtual ~ContentLogFileEndPoint();
    virtual void flush(void);
    virtual void setEnabled(bool);
    virtual bool isEnabled(void)const;
    virtual void log(LogArea, LogLevel, char const*);

    void ContentLogFileEndPoint(Core::Path, Core::Path);
    void deleteAllContentLogs(void)const;
};

#pragma once

class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long FILE_NAME;

    virtual ContentLogFileEndPoint::~ContentLogFileEndPoint();
    virtual void flush(void);
    virtual void setEnabled(bool);
    virtual bool isEnabled(void)const;
    virtual void log(LogArea, LogLevel, char const*);

    ContentLogFileEndPoint(Core::Path, Core::Path);
    void deleteAllContentLogs(void)const;
};

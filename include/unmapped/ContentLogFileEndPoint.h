#pragma once

#include "../core/Path"


class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long FILE_NAME;

    virtual ContentLogFileEndPoint::~ContentLogFileEndPoint()
    virtual void flush();
    virtual void setEnabled(bool);
    virtual bool isEnabled()const;
    virtual void log(LogArea, LogLevel, char const*);

    ContentLogFileEndPoint(Core::Path, Core::Path);
    void deleteAllContentLogs()const;
};

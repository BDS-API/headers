#pragma once

#include "ContentLogEndPoint.h"
#include "../core/Path.h"


class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long FILE_NAME;

//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    virtual void setEnabled(bool);
    ~ContentLogFileEndPoint();
    virtual bool isEnabled()const;
    virtual void flush();
    void deleteAllContentLogs()const;
    std::string getLogFileName()const;
    ContentLogFileEndPoint(Core::Path, Core::Path);
};

#pragma once

#include <string>
#include "ContentLogEndPoint.h"
#include "../core/Path.h"


class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long FILE_NAME;

    virtual void flush();
    virtual void setEnabled(bool);
    ~ContentLogFileEndPoint();
    virtual bool isEnabled()const;
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    std::string getLogFileName()const;
    void deleteAllContentLogs()const;
    ContentLogFileEndPoint(Core::Path, Core::Path);
};

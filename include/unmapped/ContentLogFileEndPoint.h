#pragma once

#include "../core/Path.h"
#include "./ContentLogEndPoint.h"
#include <string>


class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long FILE_NAME;

    virtual ~ContentLogFileEndPoint();
    virtual void flush();
    virtual void setEnabled(bool);
    virtual bool isEnabled()const;
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition

    ContentLogFileEndPoint(Core::Path, Core::Path);
    std::string getLogFileName()const;
    void deleteAllContentLogs()const;
};

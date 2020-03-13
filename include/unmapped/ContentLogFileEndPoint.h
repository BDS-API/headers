#pragma once

#include <string>
#include "ContentLogEndPoint.h"
#include "../core/Path.h"


class ContentLogFileEndPoint : ContentLogEndPoint {

public:
    static long FILE_NAME;

    ~ContentLogFileEndPoint(); // _ZN22ContentLogFileEndPointD2Ev
    virtual void flush(); // _ZN22ContentLogFileEndPoint5flushEv
    virtual void setEnabled(bool); // _ZN22ContentLogFileEndPoint10setEnabledEb
    virtual bool isEnabled()const; // _ZNK22ContentLogFileEndPoint9isEnabledEv
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition // _ZN22ContentLogFileEndPoint3logE7LogArea8LogLevelPKc
    ContentLogFileEndPoint(Core::Path, Core::Path); // _ZN22ContentLogFileEndPointC2EN4Core4PathES1_
    std::string getLogFileName()const; // _ZNK22ContentLogFileEndPoint14getLogFileNameB5cxx11Ev
    void deleteAllContentLogs()const; // _ZNK22ContentLogFileEndPoint20deleteAllContentLogsEv
};

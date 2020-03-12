#pragma once

#include "ContentLogEndPoint.h"
#include "ContextMessageLogger.h"
#include <string>


class ContentLog {

public:
    void pushThreadSpecificMessageLogger(ContextMessageLogger *);
    ContentLog();
//  void getBedrockLogAreaFromContentLogArea(LogArea); //TODO: incomplete function definition
//  void getLogLevelName(LogLevel); //TODO: incomplete function definition
    void unregisterEndPoint(ContentLogEndPoint &);
    std::string getScope();
//  void log(LogLevel, LogArea, ...); //TODO: incomplete function definition
//  void getLogAreaName(LogArea); //TODO: incomplete function definition
    void popThreadSpecificMessageLogger();
    bool isEnabled()const;
    void getNumEndPoints();
    void flush();
    void updateEnabledStatus();
//  void writeToLog(LogArea, LogLevel, __va_list_tag ([1]), ); //TODO: incomplete function definition
    void pushScope(std::string const&);
    void registerEndPoint(ContentLogEndPoint &);
    void popScope();
    ~ContentLog();
};

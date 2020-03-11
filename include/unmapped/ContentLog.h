#pragma once

#include "./ContextMessageLogger.h"
#include "./ContentLogEndPoint.h"
#include <string>


class ContentLog {

public:

    ContentLog();
    ~ContentLog();
//  void log(LogLevel, LogArea, ...); //TODO: incomplete function definition
//  void writeToLog(LogArea, LogLevel, __va_list_tag ([1]), ); //TODO: incomplete function definition
    void pushScope(std::string const&);
    void popScope();
    std::string getScope();
    void flush();
    void registerEndPoint(ContentLogEndPoint &);
    void updateEnabledStatus();
    void unregisterEndPoint(ContentLogEndPoint &);
    bool isEnabled()const;
    void pushThreadSpecificMessageLogger(ContextMessageLogger *);
    void popThreadSpecificMessageLogger();
    void getNumEndPoints();
//  void getLogLevelName(LogLevel); //TODO: incomplete function definition
//  void getLogAreaName(LogArea); //TODO: incomplete function definition
//  void getBedrockLogAreaFromContentLogArea(LogArea); //TODO: incomplete function definition
};

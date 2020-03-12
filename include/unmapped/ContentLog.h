#pragma once

#include <string>


class ContentLog {

public:
    void registerEndPoint(ContentLogEndPoint &);
//  void getLogAreaName(LogArea); //TODO: incomplete function definition
//  void getLogLevelName(LogLevel); //TODO: incomplete function definition
    void pushThreadSpecificMessageLogger(ContextMessageLogger *);
    void getNumEndPoints();
//  void getBedrockLogAreaFromContentLogArea(LogArea); //TODO: incomplete function definition
    void popThreadSpecificMessageLogger();
    void unregisterEndPoint(ContentLogEndPoint &);
    void updateEnabledStatus();
    ContentLog();
    void pushScope(std::string const&);
    bool isEnabled()const;
    void flush();
//  void writeToLog(LogArea, LogLevel, __va_list_tag ([1]), ); //TODO: incomplete function definition
    void popScope();
    std::string getScope();
    ~ContentLog();
//  void log(LogLevel, LogArea, ...); //TODO: incomplete function definition
};

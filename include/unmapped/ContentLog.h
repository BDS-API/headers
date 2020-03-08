#pragma once



class ContentLog {

public:

    ContentLog(void);
    void log(LogLevel, LogArea, ...);
    void writeToLog(LogArea, LogLevel, __va_list_tag ()([1]), );
    void pushScope(std::string const&);
    void popScope();
    void flush();
    void registerEndPoint(ContentLogEndPoint &);
    void updateEnabledStatus();
    void unregisterEndPoint(ContentLogEndPoint &);
    bool isEnabled()const;
    void pushThreadSpecificMessageLogger(ContextMessageLogger *);
    void popThreadSpecificMessageLogger();
    void getNumEndPoints();
    void getLogLevelName(LogLevel);
    void getLogAreaName(LogArea);
    void getBedrockLogAreaFromContentLogArea(LogArea);
};

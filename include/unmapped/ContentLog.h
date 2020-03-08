#pragma once



class ContentLog {

public:

    ContentLog(void);
    void log(LogLevel, LogArea, ...);
    void writeToLog(LogArea, LogLevel, __va_list_tag (&)[1]);
    void pushScope(std::string const&);
    void popScope(void);
    void flush(void);
    void registerEndPoint(ContentLogEndPoint &);
    void updateEnabledStatus(void);
    void unregisterEndPoint(ContentLogEndPoint &);
    bool isEnabled(void)const;
    void pushThreadSpecificMessageLogger(ContextMessageLogger *);
    void popThreadSpecificMessageLogger(void);
    void getNumEndPoints(void);
    void getLogLevelName(LogLevel);
    void getLogAreaName(LogArea);
    void getBedrockLogAreaFromContentLogArea(LogArea);
};

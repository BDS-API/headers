#pragma once

#include <string>


class ContentLog {

public:
    ContentLog(); // _ZN10ContentLogC2Ev
    ~ContentLog(); // _ZN10ContentLogD2Ev
//  void log(LogLevel, LogArea, ...); //TODO: incomplete function definition // _ZN10ContentLog3logE8LogLevel7LogAreaz
//  void writeToLog(LogArea, LogLevel, __va_list_tag ([1]), ); //TODO: incomplete function definition // _ZN10ContentLog10writeToLogE7LogArea8LogLevelRA1_13__va_list_tag
    void pushScope(std::string const&); // _ZN10ContentLog9pushScopeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void popScope(); // _ZN10ContentLog8popScopeEv
    std::string getScope(); // _ZN10ContentLog8getScopeB5cxx11Ev
    void flush(); // _ZN10ContentLog5flushEv
    void registerEndPoint(ContentLogEndPoint &); // _ZN10ContentLog16registerEndPointER18ContentLogEndPoint
    void updateEnabledStatus(); // _ZN10ContentLog19updateEnabledStatusEv
    void unregisterEndPoint(ContentLogEndPoint &); // _ZN10ContentLog18unregisterEndPointER18ContentLogEndPoint
    bool isEnabled()const; // _ZNK10ContentLog9isEnabledEv
    void pushThreadSpecificMessageLogger(ContextMessageLogger *); // _ZN10ContentLog31pushThreadSpecificMessageLoggerEP20ContextMessageLogger
    void popThreadSpecificMessageLogger(); // _ZN10ContentLog30popThreadSpecificMessageLoggerEv
    void getNumEndPoints(); // _ZN10ContentLog15getNumEndPointsEv
//  void getLogLevelName(LogLevel); //TODO: incomplete function definition // _ZN10ContentLog15getLogLevelNameE8LogLevel
//  void getLogAreaName(LogArea); //TODO: incomplete function definition // _ZN10ContentLog14getLogAreaNameE7LogArea
//  void getBedrockLogAreaFromContentLogArea(LogArea); //TODO: incomplete function definition // _ZN10ContentLog35getBedrockLogAreaFromContentLogAreaE7LogArea
};

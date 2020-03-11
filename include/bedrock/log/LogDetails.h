#pragma once

#include <string>
#include <memory>
#include <vector>
#include "../../core/Path.h"


namespace BedrockLog {

class LogDetails {

public:

    void update();
    void getLogName();
//  void createLog(Core::Path const&, std::string const&, std::string const&, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
    void flushLog();
    void closeLog();
//  void log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition
    void updateLogFilter(std::string const&, unsigned long);
    void updateLogSetting(std::string const&, bool);
//  void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
//  void updateLogFilter(std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::string &, bool); //TODO: incomplete function definition
    std::string dumpLogSettings();
    ~LogDetails();
    void _openLogFile();
    void _logToFile(std::string const&);
//  LogDetails(BedrockLog::LogChannel); //TODO: incomplete function definition
//  void _updateAllSettings(LogSettingsUpdater &); //TODO: incomplete function definition
//  void _filterLog(LogAreaID, unsigned int); //TODO: incomplete function definition
//  void _log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition
//  void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition
//  void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition
    void _setAppend(bool);
    void _setFlushImmediate(bool);
    void _setTimestamp(bool);
    void _setTrace(bool);
    void _setArea(bool);
    void _setPriority(bool);
    void _setThreadId(bool);
    void _setProcessId(bool);
    void _setMessageId(bool);
    void _setSilent(bool);
    void _clearAreaFilter();
//  void _toggleAreaFilter(LogAreaID); //TODO: incomplete function definition
    void _clearPriorityFilter();
    void _togglePriorityFilter(unsigned int);
};

}
#pragma once

#include "../../core/Path"


using namespace BedrockLog;

class LogDetails {

public:

    void update();
    void getLogName();
    void createLog(Core::Path const&, std::string const&, std::string const&, bool, LogSettingsUpdater *, double);
    void flushLog();
    void closeLog();
    void log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *);
    void updateLogFilter(std::string const&, unsigned long);
    void updateLogSetting(std::string const&, bool);
    void toggleLogSetting(LogSettingsUpdater &, std::string const&);
    void updateLogFilter(std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::string&, bool);
    void _openLogFile();
    void _logToFile(std::string const&);
    LogDetails(BedrockLog::LogChannel);
    void _updateAllSettings(LogSettingsUpdater &);
    void _filterLog(LogAreaID, unsigned int);
    void _log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *);
    void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int);
    void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int);
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
    void _toggleAreaFilter(LogAreaID);
    void _clearPriorityFilter();
    void _togglePriorityFilter(unsigned int);
};

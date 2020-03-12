#pragma once

#include <memory>
#include <string>
#include <vector>


namespace BedrockLog {

    class LogDetails {

    public:
        void getLogName();
        void update();
        void _setFlushImmediate(bool);
//      void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
        void _setTrace(bool);
        void _openLogFile();
//      void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition
//      void createLog(Core::Path const&, std::string const&, std::string const&, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
//      void _filterLog(LogAreaID, unsigned int); //TODO: incomplete function definition
        void _setThreadId(bool);
        void _setMessageId(bool);
//      LogDetails(BedrockLog::LogChannel); //TODO: incomplete function definition
        void _togglePriorityFilter(unsigned int);
//      void log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition
        void _setSilent(bool);
        void _setArea(bool);
        void _setProcessId(bool);
//      void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition
//      void _log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition
        void flushLog();
        void _setAppend(bool);
        void _clearPriorityFilter();
        void _setPriority(bool);
//      void _updateAllSettings(LogSettingsUpdater &); //TODO: incomplete function definition
        void _setTimestamp(bool);
        std::string dumpLogSettings();
        void updateLogFilter(std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool);
        void updateLogFilter(std::string const&, unsigned long);
        void closeLog();
        void updateLogSetting(std::string const&, bool);
//      void _toggleAreaFilter(LogAreaID); //TODO: incomplete function definition
        void _logToFile(std::string const&);
        void _clearAreaFilter();
        ~LogDetails();
    };
}

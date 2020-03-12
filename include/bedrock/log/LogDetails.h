#pragma once

#include "../../core/Path.h"
#include <vector>
#include <string>
#include <memory>


namespace BedrockLog {

    class LogDetails {

    public:
        void updateLogFilter(std::string const&, unsigned long);
//      void _toggleAreaFilter(LogAreaID); //TODO: incomplete function definition
        void _setSilent(bool);
        void _clearAreaFilter();
        void getLogName();
//      void _updateAllSettings(LogSettingsUpdater &); //TODO: incomplete function definition
//      void _log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition
        void _setThreadId(bool);
        void _setProcessId(bool);
//      void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition
        void _setAppend(bool);
        void _setFlushImmediate(bool);
        ~LogDetails();
        void _setTrace(bool);
//      void updateLogFilter(std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); //TODO: incomplete function definition
        void update();
        void _clearPriorityFilter();
//      void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition
        void _setPriority(bool);
//      void createLog(Core::Path const&, std::string const&, std::string const&, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
        void _openLogFile();
        void flushLog();
        void _setTimestamp(bool);
        void _setMessageId(bool);
        void _togglePriorityFilter(unsigned int);
        void closeLog();
        void updateLogSetting(std::string const&, bool);
//      void log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition
//      void _filterLog(LogAreaID, unsigned int); //TODO: incomplete function definition
//      void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
        void _logToFile(std::string const&);
//      LogDetails(BedrockLog::LogChannel); //TODO: incomplete function definition
        void _setArea(bool);
        std::string dumpLogSettings();
    };
}

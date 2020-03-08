#pragma once

#include "../../core/Path"


class BedrockLog {

public:

    void rakDebugLog(char const*, ...);
    void initializeLogExtensions();
    void _priorityFilterString(unsigned int);
    void _priorityFilterFromString(std::string const&);
    void _areaFilterString(LogAreaID);
    void _areaFilterFromString(std::string const&);
    void _constructAreaFilterFromString(std::string const&, BedrockLog::LogAreaFilter &);
    void _initPriorityFilterMap();
    void _initAreaFilterMap();
    void _getLog(BedrockLog::LogCategory, BedrockLog::LogChannel);
    void initialize();
    void update();
    void getLogName(BedrockLog::LogCategory, BedrockLog::LogChannel);
    void getLogName();
    void _openChannel(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, BedrockLog::LogChannel, bool, LogSettingsUpdater *, double);
    void createLog(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, std::bitset<3ul>, bool, LogSettingsUpdater *, double);
    void flushAllLogs();
    void closeLog(BedrockLog::LogCategory);
    void closeAllLogs();
    void closeAndResetLog(BedrockLog::LogCategory);
    void closeAndResetAllLogs();
    void log_va(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *);
    void log(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, ...);
    void log(LogAreaID, unsigned int, char const*, int, char const*, ...);
    void log_va(LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *);
    void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, unsigned long);
    void updateLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, bool);
    void toggleLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, LogSettingsUpdater &, std::string const&);
    void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::string&, bool);
    void updateLogFilter(std::string const&, unsigned long);
    void updateLogSetting(std::string const&, bool);
    void toggleLogSetting(LogSettingsUpdater &, std::string const&);
    void updateLogFilter(std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::string&, bool);
};

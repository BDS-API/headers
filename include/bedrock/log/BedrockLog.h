#pragma once

#include <memory>
#include <string>
#include <vector>
#include <bitset>


namespace BedrockLog {

    void _areaFilterFromString(std::string const&);
//  void _getLog(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
    void _constructAreaFilterFromString(std::string const&, BedrockLog::LogAreaFilter &);
//  void closeAndResetLog(BedrockLog::LogCategory); //TODO: incomplete function definition
//  void _areaFilterString(LogAreaID); //TODO: incomplete function definition
    void _priorityFilterString(unsigned int);
//  void toggleLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
    void updateLogFilter(std::string const&, unsigned long);
//  void getLogName(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
//  void createLog(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, std::bitset<3ul>, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
//  void updateLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, bool); //TODO: incomplete function definition
    std::string _processIdString();
//  void _openChannel(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, BedrockLog::LogChannel, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
//  void log(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition
//  std::string dumpLogSettings(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
//  void log_va(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition
    std::string _messageIdString(int);
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); //TODO: incomplete function definition
    void closeAndResetAllLogs();
    std::string _threadIdString();
    void initializeLogExtensions();
    void update();
    void initialize();
//  void log_va(LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition
    std::string dumpLogSettings();
    void _initPriorityFilterMap();
    void closeAllLogs();
    void flushAllLogs();
    void _initAreaFilterMap();
//  void log(LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition
    std::string _constructAreaFilterStringFromFilter(BedrockLog::LogAreaFilter const&);
//  void closeLog(BedrockLog::LogCategory); //TODO: incomplete function definition
//  void rakDebugLog(char const*, ...); //TODO: incomplete function definition
    void getLogName();
    void _priorityFilterFromString(std::string const&);
    void updateLogSetting(std::string const&, bool);
    void updateLogFilter(std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool);
//  void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, unsigned long); //TODO: incomplete function definition
};

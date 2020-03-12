#pragma once

#include "../../core/Path.h"
#include <string>
#include <bitset>
#include "LogAreaFilter.h"
#include <vector>
#include <memory>


namespace BedrockLog {

//  void toggleLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
    void _initPriorityFilterMap();
    void flushAllLogs();
//  void log(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition
    void initialize();
    void _constructAreaFilterFromString(std::string const&, BedrockLog::LogAreaFilter &);
//  void _getLog(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
//  void log_va(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition
    void updateLogFilter(std::string const&, unsigned long);
//  void closeAndResetLog(BedrockLog::LogCategory); //TODO: incomplete function definition
    void _priorityFilterFromString(std::string const&);
//  void log(LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition
    void updateLogSetting(std::string const&, bool);
//  void _openChannel(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, BedrockLog::LogChannel, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
    std::string dumpLogSettings();
//  void updateLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, bool); //TODO: incomplete function definition
    std::string _processIdString();
    void closeAllLogs();
    std::string _constructAreaFilterStringFromFilter(BedrockLog::LogAreaFilter const&);
    void initializeLogExtensions();
    void _areaFilterFromString(std::string const&);
    std::string _messageIdString(int);
    void _initAreaFilterMap();
//  void closeLog(BedrockLog::LogCategory); //TODO: incomplete function definition
//  std::string dumpLogSettings(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
//  void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
    void closeAndResetAllLogs();
    void _priorityFilterString(unsigned int);
//  void rakDebugLog(char const*, ...); //TODO: incomplete function definition
    std::string _threadIdString();
//  void _areaFilterString(LogAreaID); //TODO: incomplete function definition
    void update();
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); //TODO: incomplete function definition
//  void getLogName(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, unsigned long); //TODO: incomplete function definition
    void getLogName();
//  void log_va(LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition
//  void createLog(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, std::bitset<3ul>, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
//  void updateLogFilter(std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); //TODO: incomplete function definition
};

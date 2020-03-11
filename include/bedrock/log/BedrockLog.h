#pragma once

#include "../../core/Path.h"
#include <bitset>
#include <memory>
#include <vector>
#include "./LogAreaFilter.h"
#include <string>


class BedrockLog {

public:

//  void rakDebugLog(char const*, ...); //TODO: incomplete function definition
    void initializeLogExtensions();
    std::string _threadIdString();
    std::string _processIdString();
    std::string _messageIdString(int);
    void _priorityFilterString(unsigned int);
    void _priorityFilterFromString(std::string const&);
//  void _areaFilterString(LogAreaID); //TODO: incomplete function definition
    void _areaFilterFromString(std::string const&);
    void _constructAreaFilterFromString(std::string const&, BedrockLog::LogAreaFilter &);
    std::string _constructAreaFilterStringFromFilter(BedrockLog::LogAreaFilter const&);
    void _initPriorityFilterMap();
    void _initAreaFilterMap();
//  void _getLog(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
    void initialize();
    void update();
//  void getLogName(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
    void getLogName();
//  void _openChannel(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, BedrockLog::LogChannel, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
//  void createLog(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, std::bitset<3ul>, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition
    void flushAllLogs();
//  void closeLog(BedrockLog::LogCategory); //TODO: incomplete function definition
    void closeAllLogs();
//  void closeAndResetLog(BedrockLog::LogCategory); //TODO: incomplete function definition
    void closeAndResetAllLogs();
//  void log_va(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition
//  void log(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition
//  void log(LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition
//  void log_va(LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, unsigned long); //TODO: incomplete function definition
//  void updateLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, bool); //TODO: incomplete function definition
//  void toggleLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::string &, bool); //TODO: incomplete function definition
//  std::string dumpLogSettings(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition
    void updateLogFilter(std::string const&, unsigned long);
    void updateLogSetting(std::string const&, bool);
//  void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition
//  void updateLogFilter(std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::string &, bool); //TODO: incomplete function definition
    std::string dumpLogSettings();
};

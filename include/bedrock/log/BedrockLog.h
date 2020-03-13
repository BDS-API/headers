#pragma once

#include <string>
#include <memory>
#include <bitset>
#include <vector>


namespace BedrockLog {

//  void rakDebugLog(char const*, ...); //TODO: incomplete function definition // _ZN10BedrockLog11rakDebugLogEPKcz
    void initializeLogExtensions(); // _ZN10BedrockLog23initializeLogExtensionsEv
    std::string _threadIdString(); // _ZN10BedrockLog15_threadIdStringB5cxx11Ev
    std::string _processIdString(); // _ZN10BedrockLog16_processIdStringB5cxx11Ev
    std::string _messageIdString(int); // _ZN10BedrockLog16_messageIdStringB5cxx11Ei
    void _priorityFilterString(unsigned int); // _ZN10BedrockLog21_priorityFilterStringEj
    void _priorityFilterFromString(std::string const&); // _ZN10BedrockLog25_priorityFilterFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void _areaFilterString(LogAreaID); //TODO: incomplete function definition // _ZN10BedrockLog17_areaFilterStringE9LogAreaID
    void _areaFilterFromString(std::string const&); // _ZN10BedrockLog21_areaFilterFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _constructAreaFilterFromString(std::string const&, BedrockLog::LogAreaFilter &); // _ZN10BedrockLog30_constructAreaFilterFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS_13LogAreaFilterE
    std::string _constructAreaFilterStringFromFilter(BedrockLog::LogAreaFilter const&); // _ZN10BedrockLog36_constructAreaFilterStringFromFilterB5cxx11ERKNS_13LogAreaFilterE
    void _initPriorityFilterMap(); // _ZN10BedrockLog22_initPriorityFilterMapEv
    void _initAreaFilterMap(); // _ZN10BedrockLog18_initAreaFilterMapEv
//  void _getLog(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition // _ZN10BedrockLog7_getLogENS_11LogCategoryENS_10LogChannelE
    void initialize(); // _ZN10BedrockLog10initializeEv
    void update(); // _ZN10BedrockLog6updateEv
//  void getLogName(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition // _ZN10BedrockLog10getLogNameENS_11LogCategoryENS_10LogChannelE
    void getLogName(); // _ZN10BedrockLog10getLogNameEv
//  void _openChannel(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, BedrockLog::LogChannel, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition // _ZN10BedrockLog12_openChannelERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_NS_11LogCategoryENS_10LogChannelEbP18LogSettingsUpdaterd
//  void createLog(Core::Path const&, std::string const&, std::string const&, BedrockLog::LogCategory, std::bitset<3ul>, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition // _ZN10BedrockLog9createLogERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_NS_11LogCategoryESt6bitsetILm3EEbP18LogSettingsUpdaterd
    void flushAllLogs(); // _ZN10BedrockLog12flushAllLogsEv
//  void closeLog(BedrockLog::LogCategory); //TODO: incomplete function definition // _ZN10BedrockLog8closeLogENS_11LogCategoryE
    void closeAllLogs(); // _ZN10BedrockLog12closeAllLogsEv
//  void closeAndResetLog(BedrockLog::LogCategory); //TODO: incomplete function definition // _ZN10BedrockLog16closeAndResetLogENS_11LogCategoryE
    void closeAndResetAllLogs(); // _ZN10BedrockLog20closeAndResetAllLogsEv
//  void log_va(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN10BedrockLog6log_vaENS_11LogCategoryESt6bitsetILm3EENS_7LogRuleE9LogAreaIDjPKciS6_P13__va_list_tag
//  void log(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition // _ZN10BedrockLog3logENS_11LogCategoryESt6bitsetILm3EENS_7LogRuleE9LogAreaIDjPKciS6_z
//  void log(LogAreaID, unsigned int, char const*, int, char const*, ...); //TODO: incomplete function definition // _ZN10BedrockLog3logE9LogAreaIDjPKciS2_z
//  void log_va(LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN10BedrockLog6log_vaE9LogAreaIDjPKciS2_P13__va_list_tag
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, unsigned long); //TODO: incomplete function definition // _ZN10BedrockLog15updateLogFilterENS_11LogCategoryENS_10LogChannelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
//  void updateLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, std::string const&, bool); //TODO: incomplete function definition // _ZN10BedrockLog16updateLogSettingENS_11LogCategoryENS_10LogChannelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  void toggleLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition // _ZN10BedrockLog16toggleLogSettingENS_11LogCategoryENS_10LogChannelER18LogSettingsUpdaterRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); //TODO: incomplete function definition // _ZN10BedrockLog15updateLogFilterENS_11LogCategoryENS_10LogChannelESt10unique_ptrI18LogSettingsUpdaterSt14default_deleteIS3_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISC_SaISC_EERSC_b
//  std::string dumpLogSettings(BedrockLog::LogCategory, BedrockLog::LogChannel); //TODO: incomplete function definition // _ZN10BedrockLog15dumpLogSettingsB5cxx11ENS_11LogCategoryENS_10LogChannelE
    void updateLogFilter(std::string const&, unsigned long); // _ZN10BedrockLog15updateLogFilterERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    void updateLogSetting(std::string const&, bool); // _ZN10BedrockLog16updateLogSettingERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//  void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition // _ZN10BedrockLog16toggleLogSettingER18LogSettingsUpdaterRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void updateLogFilter(std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); // _ZN10BedrockLog15updateLogFilterESt10unique_ptrI18LogSettingsUpdaterSt14default_deleteIS1_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISA_SaISA_EERSA_b
    std::string dumpLogSettings(); // _ZN10BedrockLog15dumpLogSettingsB5cxx11Ev
};

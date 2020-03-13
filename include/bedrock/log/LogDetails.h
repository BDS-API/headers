#pragma once

#include <string>
#include <memory>
#include <vector>


namespace BedrockLog {

    class LogDetails {

    public:
        void update(); // _ZN10BedrockLog10LogDetails6updateEv
        void getLogName(); // _ZN10BedrockLog10LogDetails10getLogNameEv
//      void createLog(Core::Path const&, std::string const&, std::string const&, bool, LogSettingsUpdater *, double); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails9createLogERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESC_bP18LogSettingsUpdaterd
        void flushLog(); // _ZN10BedrockLog10LogDetails8flushLogEv
        void closeLog(); // _ZN10BedrockLog10LogDetails8closeLogEv
//      void log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails6log_vaE9LogAreaIDjPKciiS3_P13__va_list_tag
        void updateLogFilter(std::string const&, unsigned long); // _ZN10BedrockLog10LogDetails15updateLogFilterERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
        void updateLogSetting(std::string const&, bool); // _ZN10BedrockLog10LogDetails16updateLogSettingERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//      void toggleLogSetting(LogSettingsUpdater &, std::string const&); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails16toggleLogSettingER18LogSettingsUpdaterRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void updateLogFilter(std::unique_ptr<LogSettingsUpdater>, std::string const&, std::vector<std::string> const&, std::string &, bool); // _ZN10BedrockLog10LogDetails15updateLogFilterESt10unique_ptrI18LogSettingsUpdaterSt14default_deleteIS2_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISB_SaISB_EERSB_b
        std::string dumpLogSettings(); // _ZN10BedrockLog10LogDetails15dumpLogSettingsB5cxx11Ev
        ~LogDetails(); // _ZN10BedrockLog10LogDetailsD2Ev
        void _openLogFile(); // _ZN10BedrockLog10LogDetails12_openLogFileEv
        void _logToFile(std::string const&); // _ZN10BedrockLog10LogDetails10_logToFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//      LogDetails(BedrockLog::LogChannel); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetailsC2ENS_10LogChannelE
//      void _updateAllSettings(LogSettingsUpdater &); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails18_updateAllSettingsER18LogSettingsUpdater
//      void _filterLog(LogAreaID, unsigned int); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails10_filterLogE9LogAreaIDj
//      void _log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails7_log_vaE9LogAreaIDjPKciiS3_P13__va_list_tag
//      void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails23_appendLogEntryMetadataERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE9LogAreaIDjS6_ii
//      void _appendLogEntryMetadata(std::string &, LogAreaID, unsigned int, std::string, int, int); //TODO: incomplete function definition // _ZZN10BedrockLog10LogDetails23_appendLogEntryMetadataERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE9LogAreaIDjS6_iiENKUlRKS6_SA_E_clB5cxx11ESA_SA_
        void _setAppend(bool); // _ZN10BedrockLog10LogDetails10_setAppendEb
        void _setFlushImmediate(bool); // _ZN10BedrockLog10LogDetails18_setFlushImmediateEb
        void _setTimestamp(bool); // _ZN10BedrockLog10LogDetails13_setTimestampEb
        void _setTrace(bool); // _ZN10BedrockLog10LogDetails9_setTraceEb
        void _setArea(bool); // _ZN10BedrockLog10LogDetails8_setAreaEb
        void _setPriority(bool); // _ZN10BedrockLog10LogDetails12_setPriorityEb
        void _setThreadId(bool); // _ZN10BedrockLog10LogDetails12_setThreadIdEb
        void _setProcessId(bool); // _ZN10BedrockLog10LogDetails13_setProcessIdEb
        void _setMessageId(bool); // _ZN10BedrockLog10LogDetails13_setMessageIdEb
        void _setSilent(bool); // _ZN10BedrockLog10LogDetails10_setSilentEb
        void _clearAreaFilter(); // _ZN10BedrockLog10LogDetails16_clearAreaFilterEv
//      void _toggleAreaFilter(LogAreaID); //TODO: incomplete function definition // _ZN10BedrockLog10LogDetails17_toggleAreaFilterE9LogAreaID
        void _clearPriorityFilter(); // _ZN10BedrockLog10LogDetails20_clearPriorityFilterEv
        void _togglePriorityFilter(unsigned int); // _ZN10BedrockLog10LogDetails21_togglePriorityFilterEj
    };
}

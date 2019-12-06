#pragma once

class BedrockLog {

public:

    void rakDebugLog(char const*, ...);
    void initializeLogExtensions(void);
    void _priorityFilterString(unsigned int);
    void _priorityFilterFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _areaFilterString(LogAreaID);
    void _areaFilterFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _constructAreaFilterFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BedrockLog::LogAreaFilter &);
    void _initPriorityFilterMap(void);
    void _initAreaFilterMap(void);
    void _getLog(BedrockLog::LogCategory, BedrockLog::LogChannel);
    void initialize(void);
    void update(void);
    void getLogName(BedrockLog::LogCategory, BedrockLog::LogChannel);
    void getLogName(void);
    void _openChannel(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BedrockLog::LogCategory, BedrockLog::LogChannel, bool, LogSettingsUpdater *, double);
    void createLog(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BedrockLog::LogCategory, std::bitset<3ul>, bool, LogSettingsUpdater *, double);
    void flushAllLogs(void);
    void closeLog(BedrockLog::LogCategory);
    void closeAllLogs(void);
    void closeAndResetLog(BedrockLog::LogCategory);
    void closeAndResetAllLogs(void);
    void log_va(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *);
    void log(BedrockLog::LogCategory, std::bitset<3ul>, BedrockLog::LogRule, LogAreaID, unsigned int, char const*, int, char const*, ...);
    void log(LogAreaID, unsigned int, char const*, int, char const*, ...);
    void log_va(LogAreaID, unsigned int, char const*, int, char const*, __va_list_tag *);
    void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void updateLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void toggleLogSetting(BedrockLog::LogCategory, BedrockLog::LogChannel, LogSettingsUpdater &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void updateLogFilter(BedrockLog::LogCategory, BedrockLog::LogChannel, std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, bool);
    void updateLogFilter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void updateLogSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void toggleLogSetting(LogSettingsUpdater &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void updateLogFilter(std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, bool);
};

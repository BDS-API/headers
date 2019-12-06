#pragma once

class BedrockLog::LogDetails {

public:

    void update(void);
    void getLogName(void);
    void createLog(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, LogSettingsUpdater *, double);
    void flushLog(void);
    void closeLog(void);
    void log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *);
    void updateLogFilter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void updateLogSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void toggleLogSetting(LogSettingsUpdater &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void updateLogFilter(std::unique_ptr<LogSettingsUpdater, std::default_delete<LogSettingsUpdater>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, bool);
    void _openLogFile(void);
    void _logToFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void LogDetails(BedrockLog::LogChannel);
    void _updateAllSettings(LogSettingsUpdater &);
    void _filterLog(LogAreaID, unsigned int);
    void _log_va(LogAreaID, unsigned int, char const*, int, int, char const*, __va_list_tag *);
    void _appendLogEntryMetadata(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, LogAreaID, unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int);
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
    void _clearAreaFilter(void);
    void _toggleAreaFilter(LogAreaID);
    void _clearPriorityFilter(void);
    void _togglePriorityFilter(unsigned int);
};

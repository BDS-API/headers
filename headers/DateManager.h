#pragma once

class DateManager {

public:

    bool isLeapYear(unsigned int);
    void getNumDaysInYear(unsigned int);
    void getNumDaysInMonth(unsigned int, unsigned int);
    bool isValidEpochDate(unsigned int, unsigned int, unsigned int);
    bool isValidTime(unsigned int, unsigned int, unsigned int);
    bool isValidTimeZone(int, int);
    void _getNumDaysSinceJanuary(unsigned int, unsigned int);
    void _getNumDaysSince1970(unsigned int);
    void _mktime_gm(tm const*);
    void DateManager(void);
    void reset(void);
    void setTime(long);
    void setTimeScale(unsigned int);
    void tick(void);
    void _sendScheduledCallbacks(void);
    void getTime(void)const;
    void getDateTime(DateManager::TimeZoneType)const;
    void toDateTime(long, DateManager::TimeZoneType);
    void getRealTime(void);
    void getRealDateTime(DateManager::TimeZoneType);
    void getTimeScale(void)const;
    void clear(tm *);
    void toDateTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void toDateTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, tm *, DateManager::TimeZoneType *, int *);
    void toEpochTime(tm *, DateManager::TimeZoneType);
    void toEpochTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, long *, DateManager::TimeZoneType *, int *);
    void _parseDate(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    void _matchPattern(char const*, char const*);
    void _parseTime(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    void _parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType *, int *, int *);
    void toEpochTime(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void toString(tm const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void toString(long const&, DateManager::TimeZoneType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void toString(DateManager::TimeZoneType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isInPast(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isBetweenDates(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void registerScheduledCallback(ScheduledCallback)const;
};

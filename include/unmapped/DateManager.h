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
    DateManager(void);
    void reset();
    void setTime(long);
    void setTimeScale(unsigned int);
    void tick();
    void _sendScheduledCallbacks();
    void getTime()const;
    void getDateTime(DateManager::TimeZoneType)const;
    void toDateTime(long, DateManager::TimeZoneType);
    void getRealTime();
    void getRealDateTime(DateManager::TimeZoneType);
    void getTimeScale()const;
    void clear(tm *);
    void toDateTime(std::string const&);
    void toDateTime(std::string const&, tm *, DateManager::TimeZoneType *, int *);
    void toEpochTime(tm *, DateManager::TimeZoneType);
    void toEpochTime(std::string const&, long *, DateManager::TimeZoneType *, int *);
    void _parseDate(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    void _matchPattern(char const*, char const*);
    void _parseTime(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    void _parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType *, int *, int *);
    void toEpochTime(std::string const&);
    void toString(tm const&, std::string const&);
    void toString(long const&, DateManager::TimeZoneType, std::string const&);
    void toString(DateManager::TimeZoneType, std::string const&)const;
    bool isInPast(std::string const&);
    bool isBetweenDates(std::string const&, std::string const&)const;
    void registerScheduledCallback(ScheduledCallback)const;
};

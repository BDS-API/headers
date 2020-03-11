#pragma once

#include "./ScheduledCallback.h"
#include <string>


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
//  void _mktime_gm(tm const*); //TODO: incomplete function definition
    DateManager();
    void reset();
    ~DateManager();
    void setTime(long);
    void setTimeScale(unsigned int);
    void tick();
    void _sendScheduledCallbacks();
    void getTime()const;
//  void getDateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition
//  void toDateTime(long, DateManager::TimeZoneType); //TODO: incomplete function definition
    void getRealTime();
//  void getRealDateTime(DateManager::TimeZoneType); //TODO: incomplete function definition
    void getTimeScale()const;
//  void clear(tm *); //TODO: incomplete function definition
    void toDateTime(std::string const&);
//  void toDateTime(std::string const&, tm *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition
//  void toEpochTime(tm *, DateManager::TimeZoneType); //TODO: incomplete function definition
//  void toEpochTime(std::string const&, long *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition
    void _parseDate(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    void _matchPattern(char const*, char const*);
    void _parseTime(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
//  void _parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType *, int *, int *); //TODO: incomplete function definition
    void toEpochTime(std::string const&);
//  void toString(tm const&, std::string const&); //TODO: incomplete function definition
//  std::string toString_DateTime(tm const&, DateManager::TimeZoneType); //TODO: incomplete function definition
//  std::string toString_Date(tm const&); //TODO: incomplete function definition
//  std::string toString_TruncateToHourUTC(tm const&); //TODO: incomplete function definition
    std::string getCurrentTimestampFileName();
//  void toString(long const&, DateManager::TimeZoneType, std::string const&); //TODO: incomplete function definition
//  std::string toString_DateTime(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition
//  std::string toString_Date(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition
//  void toString(DateManager::TimeZoneType, std::string const&)const; //TODO: incomplete function definition
//  std::string toString_DateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition
//  std::string toString_Date(DateManager::TimeZoneType)const; //TODO: incomplete function definition
    bool isInPast(std::string const&);
    bool isBetweenDates(std::string const&, std::string const&)const;
    void registerScheduledCallback(ScheduledCallback)const;
};

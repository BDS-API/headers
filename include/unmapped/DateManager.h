#pragma once

#include <string>
#include "ScheduledCallback.h"


class DateManager {

public:
    bool isBetweenDates(std::string const&, std::string const&)const;
    bool isValidTimeZone(int, int);
//  void toEpochTime(std::string const&, long *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition
//  std::string toString_DateTime(tm const&, DateManager::TimeZoneType); //TODO: incomplete function definition
//  void toString(DateManager::TimeZoneType, std::string const&)const; //TODO: incomplete function definition
    void setTimeScale(unsigned int);
    DateManager();
    void reset();
    std::string getCurrentTimestampFileName();
    void setTime(long);
    void getNumDaysInYear(unsigned int);
//  void toDateTime(long, DateManager::TimeZoneType); //TODO: incomplete function definition
//  std::string toString_Date(tm const&); //TODO: incomplete function definition
//  void clear(tm *); //TODO: incomplete function definition
//  std::string toString_Date(DateManager::TimeZoneType)const; //TODO: incomplete function definition
    bool isInPast(std::string const&);
    void _matchPattern(char const*, char const*);
//  void toEpochTime(tm *, DateManager::TimeZoneType); //TODO: incomplete function definition
//  void _parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType *, int *, int *); //TODO: incomplete function definition
//  void toString(long const&, DateManager::TimeZoneType, std::string const&); //TODO: incomplete function definition
//  void getDateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition
//  void _mktime_gm(tm const*); //TODO: incomplete function definition
    ~DateManager();
    void tick();
    void getTimeScale()const;
    void _parseTime(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
//  void toDateTime(std::string const&, tm *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition
    bool isValidTime(unsigned int, unsigned int, unsigned int);
//  std::string toString_TruncateToHourUTC(tm const&); //TODO: incomplete function definition
    void getRealTime();
//  std::string toString_Date(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition
    void getTime()const;
    void _sendScheduledCallbacks();
    bool isValidEpochDate(unsigned int, unsigned int, unsigned int);
    void toDateTime(std::string const&);
//  std::string toString_DateTime(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition
    void _getNumDaysSinceJanuary(unsigned int, unsigned int);
//  void getRealDateTime(DateManager::TimeZoneType); //TODO: incomplete function definition
//  void toString(tm const&, std::string const&); //TODO: incomplete function definition
//  std::string toString_DateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition
    void _parseDate(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    bool isLeapYear(unsigned int);
    void registerScheduledCallback(ScheduledCallback)const;
    void toEpochTime(std::string const&);
    void _getNumDaysSince1970(unsigned int);
    void getNumDaysInMonth(unsigned int, unsigned int);
};

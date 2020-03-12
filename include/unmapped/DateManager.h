#pragma once

#include "ScheduledCallback.h"
#include <string>


class DateManager {

public:
//  std::string toString_TruncateToHourUTC(tm const&); //TODO: incomplete function definition
    bool isBetweenDates(std::string const&, std::string const&)const;
    void _getNumDaysSince1970(unsigned int);
    bool isValidTime(unsigned int, unsigned int, unsigned int);
//  void toEpochTime(std::string const&, long *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition
    void registerScheduledCallback(ScheduledCallback)const;
//  void clear(tm *); //TODO: incomplete function definition
//  std::string toString_Date(tm const&); //TODO: incomplete function definition
//  std::string toString_Date(DateManager::TimeZoneType)const; //TODO: incomplete function definition
    void _matchPattern(char const*, char const*);
    void getNumDaysInYear(unsigned int);
    bool isInPast(std::string const&);
    void _parseDate(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
    bool isLeapYear(unsigned int);
//  void getRealDateTime(DateManager::TimeZoneType); //TODO: incomplete function definition
//  void _mktime_gm(tm const*); //TODO: incomplete function definition
    void getRealTime();
    void reset();
    DateManager();
    void toEpochTime(std::string const&);
//  void toDateTime(std::string const&, tm *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition
//  void toEpochTime(tm *, DateManager::TimeZoneType); //TODO: incomplete function definition
//  void toString(long const&, DateManager::TimeZoneType, std::string const&); //TODO: incomplete function definition
    void _getNumDaysSinceJanuary(unsigned int, unsigned int);
    bool isValidTimeZone(int, int);
//  std::string toString_DateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition
//  void getDateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition
    void getTime()const;
    bool isValidEpochDate(unsigned int, unsigned int, unsigned int);
    void setTime(long);
    void getTimeScale()const;
    void setTimeScale(unsigned int);
    std::string getCurrentTimestampFileName();
//  std::string toString_Date(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition
//  void _parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType *, int *, int *); //TODO: incomplete function definition
//  void toString(tm const&, std::string const&); //TODO: incomplete function definition
//  void toString(DateManager::TimeZoneType, std::string const&)const; //TODO: incomplete function definition
    void toDateTime(std::string const&);
    ~DateManager();
//  std::string toString_DateTime(tm const&, DateManager::TimeZoneType); //TODO: incomplete function definition
//  std::string toString_DateTime(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition
    void tick();
    void _parseTime(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *);
//  void toDateTime(long, DateManager::TimeZoneType); //TODO: incomplete function definition
    void _sendScheduledCallbacks();
    void getNumDaysInMonth(unsigned int, unsigned int);
};

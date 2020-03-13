#pragma once

#include <string>
#include "ScheduledCallback.h"


class DateManager {

public:
    bool isLeapYear(unsigned int); // _ZN11DateManager10isLeapYearEj
    void getNumDaysInYear(unsigned int); // _ZN11DateManager16getNumDaysInYearEj
    void getNumDaysInMonth(unsigned int, unsigned int); // _ZN11DateManager17getNumDaysInMonthEjj
    bool isValidEpochDate(unsigned int, unsigned int, unsigned int); // _ZN11DateManager16isValidEpochDateEjjj
    bool isValidTime(unsigned int, unsigned int, unsigned int); // _ZN11DateManager11isValidTimeEjjj
    bool isValidTimeZone(int, int); // _ZN11DateManager15isValidTimeZoneEii
    void _getNumDaysSinceJanuary(unsigned int, unsigned int); // _ZN11DateManager23_getNumDaysSinceJanuaryEjj
    void _getNumDaysSince1970(unsigned int); // _ZN11DateManager20_getNumDaysSince1970Ej
//  void _mktime_gm(tm const*); //TODO: incomplete function definition // _ZN11DateManager10_mktime_gmEPK2tm
    DateManager(); // _ZN11DateManagerC2Ev
    void reset(); // _ZN11DateManager5resetEv
    ~DateManager(); // _ZN11DateManagerD2Ev
    void setTime(long); // _ZN11DateManager7setTimeEl
    void setTimeScale(unsigned int); // _ZN11DateManager12setTimeScaleEj
    void tick(); // _ZN11DateManager4tickEv
    void _sendScheduledCallbacks(); // _ZN11DateManager23_sendScheduledCallbacksEv
    void getTime()const; // _ZNK11DateManager7getTimeEv
//  void getDateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition // _ZNK11DateManager11getDateTimeENS_12TimeZoneTypeE
//  void toDateTime(long, DateManager::TimeZoneType); //TODO: incomplete function definition // _ZN11DateManager10toDateTimeElNS_12TimeZoneTypeE
    void getRealTime(); // _ZN11DateManager11getRealTimeEv
//  void getRealDateTime(DateManager::TimeZoneType); //TODO: incomplete function definition // _ZN11DateManager15getRealDateTimeENS_12TimeZoneTypeE
    void getTimeScale()const; // _ZNK11DateManager12getTimeScaleEv
//  void clear(tm *); //TODO: incomplete function definition // _ZN11DateManager5clearEP2tm
    void toDateTime(std::string const&); // _ZN11DateManager10toDateTimeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void toDateTime(std::string const&, tm *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition // _ZN11DateManager10toDateTimeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEP2tmPNS_12TimeZoneTypeEPi
//  void toEpochTime(tm *, DateManager::TimeZoneType); //TODO: incomplete function definition // _ZN11DateManager11toEpochTimeEP2tmNS_12TimeZoneTypeE
//  void toEpochTime(std::string const&, long *, DateManager::TimeZoneType *, int *); //TODO: incomplete function definition // _ZN11DateManager11toEpochTimeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPlPNS_12TimeZoneTypeEPi
    void _parseDate(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *); // _ZN11DateManager10_parseDateEPKcmPjS2_S2_
    void _matchPattern(char const*, char const*); // _ZN11DateManager13_matchPatternEPKcS1_
    void _parseTime(char const*, unsigned long, unsigned int *, unsigned int *, unsigned int *); // _ZN11DateManager10_parseTimeEPKcmPjS2_S2_
//  void _parseTimeZone(char const*, unsigned long, DateManager::TimeZoneType *, int *, int *); //TODO: incomplete function definition // _ZN11DateManager14_parseTimeZoneEPKcmPNS_12TimeZoneTypeEPiS4_
    void toEpochTime(std::string const&); // _ZN11DateManager11toEpochTimeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void toString(tm const&, std::string const&); //TODO: incomplete function definition // _ZN11DateManager8toStringERK2tmRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string toString_DateTime(tm const&, DateManager::TimeZoneType); //TODO: incomplete function definition // _ZN11DateManager17toString_DateTimeB5cxx11ERK2tmNS_12TimeZoneTypeE
//  std::string toString_Date(tm const&); //TODO: incomplete function definition // _ZN11DateManager13toString_DateB5cxx11ERK2tm
//  std::string toString_TruncateToHourUTC(tm const&); //TODO: incomplete function definition // _ZN11DateManager26toString_TruncateToHourUTCB5cxx11ERK2tm
    std::string getCurrentTimestampFileName(); // _ZN11DateManager27getCurrentTimestampFileNameB5cxx11Ev
//  void toString(long const&, DateManager::TimeZoneType, std::string const&); //TODO: incomplete function definition // _ZN11DateManager8toStringERKlNS_12TimeZoneTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string toString_DateTime(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition // _ZN11DateManager17toString_DateTimeB5cxx11ERKlNS_12TimeZoneTypeE
//  std::string toString_Date(long const&, DateManager::TimeZoneType); //TODO: incomplete function definition // _ZN11DateManager13toString_DateB5cxx11ERKlNS_12TimeZoneTypeE
//  void toString(DateManager::TimeZoneType, std::string const&)const; //TODO: incomplete function definition // _ZNK11DateManager8toStringENS_12TimeZoneTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string toString_DateTime(DateManager::TimeZoneType)const; //TODO: incomplete function definition // _ZNK11DateManager17toString_DateTimeB5cxx11ENS_12TimeZoneTypeE
//  std::string toString_Date(DateManager::TimeZoneType)const; //TODO: incomplete function definition // _ZNK11DateManager13toString_DateB5cxx11ENS_12TimeZoneTypeE
    bool isInPast(std::string const&); // _ZN11DateManager8isInPastERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isBetweenDates(std::string const&, std::string const&)const; // _ZNK11DateManager14isBetweenDatesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void registerScheduledCallback(ScheduledCallback)const; // _ZNK11DateManager25registerScheduledCallbackE17ScheduledCallback
};

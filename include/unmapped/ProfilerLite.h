#pragma once

#include <string>
#include "../core/Path.h"
#include <vector>


class ProfilerLite {

public:
    class ScopedData;

    static long sEmptyThreadID;
    static long gProfilerLiteInstance;

    void logTimedEvent(std::string const&, double); // _ZN12ProfilerLite13logTimedEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
    ProfilerLite(); // _ZN12ProfilerLiteC2Ev
    void init(Core::Path const&); // _ZN12ProfilerLite4initERKN4Core4PathE
    void reset(); // _ZN12ProfilerLite5resetEv
    void createLog(Core::Path const&, Core::OutputFileStream &); // _ZN12ProfilerLite9createLogERKN4Core4PathERNS0_16OutputFileStreamE
    void logToFile(std::string const&, Core::Path, Core::OutputFileStream &); // _ZN12ProfilerLite9logToFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN4Core4PathERNS8_16OutputFileStreamE
    void shutdown(); // _ZN12ProfilerLite8shutdownEv
    void closeLog(Core::OutputFileStream &); // _ZN12ProfilerLite8closeLogERN4Core16OutputFileStreamE
    bool isBenchmarkModeDone(); // _ZN12ProfilerLite19isBenchmarkModeDoneEv
    void changeCurrentGamestateValue(std::string const&); // _ZN12ProfilerLite27changeCurrentGamestateValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void setTreatmentService(TreatmentService *); //TODO: incomplete function definition // _ZN12ProfilerLite19setTreatmentServiceEP16TreatmentService
    void setSecondaryLogFileName(Core::Path const&); // _ZN12ProfilerLite23setSecondaryLogFileNameERKN4Core4PathE
    void setSecondaryScreenLoadLogFileName(Core::Path const&); // _ZN12ProfilerLite33setSecondaryScreenLoadLogFileNameERKN4Core4PathE
    void setSecondaryEventLogFileName(Core::Path const&); // _ZN12ProfilerLite28setSecondaryEventLogFileNameERKN4Core4PathE
    void setCanLogToSecondaryFile(bool); // _ZN12ProfilerLite24setCanLogToSecondaryFileEb
    void logScreenCreationEvent(std::string const&, double, unsigned char); // _ZN12ProfilerLite22logScreenCreationEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEdh
    void _shouldLogToSecondaryFile(); // _ZN12ProfilerLite25_shouldLogToSecondaryFileEv
    void _writeHeadersIfEmpty(std::string const&, Core::Path, Core::OutputFileStream &); // _ZN12ProfilerLite20_writeHeadersIfEmptyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN4Core4PathERNS8_16OutputFileStreamE
//  void calculateAndSetServerTickTimes(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition // _ZN12ProfilerLite30calculateAndSetServerTickTimesENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    void getServerTickTime()const; // _ZNK12ProfilerLite17getServerTickTimeEv
    void checkTreatmentsAndEnable(std::vector<std::string> const&); // _ZN12ProfilerLite24checkTreatmentsAndEnableERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    void moveToEndOfString(char **, unsigned long &)const; // _ZNK12ProfilerLite17moveToEndOfStringEPPcRm
    void openLog(Core::Path const&, Core::OutputFileStream &); // _ZN12ProfilerLite7openLogERKN4Core4PathERNS0_16OutputFileStreamE
//  void getNetworkStats(ProfilerLite::NetworkStats &, TrackerType); //TODO: incomplete function definition // _ZN12ProfilerLite15getNetworkStatsERNS_12NetworkStatsE11TrackerType
    void getFileStats(unsigned int &, unsigned int &, double); // _ZN12ProfilerLite12getFileStatsERjS0_d
    void getDiskAccessStats(double &, double &); // _ZN12ProfilerLite18getDiskAccessStatsERdS0_
    void _calculateRealtimeFrameData(); // _ZN12ProfilerLite27_calculateRealtimeFrameDataEv
    void tick(bool, bool, int, long, long, bool); // _ZN12ProfilerLite4tickEbbillb
    void _getProfileStringRecursive(ProfilerLite::ScopedData &, unsigned long &, unsigned long &, char *&); // _ZN12ProfilerLite26_getProfileStringRecursiveERNS_10ScopedDataERmS2_RPc
    void getProfileString(char *, int); // _ZN12ProfilerLite16getProfileStringEPci
    void getInstance(); // _ZN12ProfilerLite11getInstanceEv
    ~ProfilerLite(); // _ZN12ProfilerLiteD2Ev
    void getSecondsPerUpdate(); // _ZN12ProfilerLite19getSecondsPerUpdateEv
    class ScopedData {

    public:
        ~ScopedData(); // _ZN12ProfilerLite10ScopedDataD2Ev
        void resetRecursive(); // _ZN12ProfilerLite10ScopedData14resetRecursiveEv
    };
};

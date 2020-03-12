#pragma once

#include <string>
#include "../core/Path.h"
#include <vector>


class ProfilerLite {

public:
    class ScopedData;

    static long sEmptyThreadID;
    static long gProfilerLiteInstance;

    void setCanLogToSecondaryFile(bool);
    void getDiskAccessStats(double &, double &);
    bool isBenchmarkModeDone();
    void logScreenCreationEvent(std::string const&, double, unsigned char);
    void logToFile(std::string const&, Core::Path, Core::OutputFileStream &);
    void getSecondsPerUpdate();
    void shutdown();
    void moveToEndOfString(char **, unsigned long &)const;
    void getServerTickTime()const;
    void getProfileString(char *, int);
    void _getProfileStringRecursive(ProfilerLite::ScopedData &, unsigned long &, unsigned long &, char *&);
    void _shouldLogToSecondaryFile();
    void _writeHeadersIfEmpty(std::string const&, Core::Path, Core::OutputFileStream &);
    void openLog(Core::Path const&, Core::OutputFileStream &);
    void reset();
//  void calculateAndSetServerTickTimes(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
//  void setTreatmentService(TreatmentService *); //TODO: incomplete function definition
    void setSecondaryEventLogFileName(Core::Path const&);
    void changeCurrentGamestateValue(std::string const&);
    void tick(bool, bool, int, long, long, bool);
    ProfilerLite();
    void closeLog(Core::OutputFileStream &);
    void getFileStats(unsigned int &, unsigned int &, double);
    void setSecondaryLogFileName(Core::Path const&);
    ~ProfilerLite();
    void checkTreatmentsAndEnable(std::vector<std::string> const&);
    void logTimedEvent(std::string const&, double);
    void _calculateRealtimeFrameData();
//  void getNetworkStats(ProfilerLite::NetworkStats &, TrackerType); //TODO: incomplete function definition
    void getInstance();
    void createLog(Core::Path const&, Core::OutputFileStream &);
    void setSecondaryScreenLoadLogFileName(Core::Path const&);
    void init(Core::Path const&);
    class ScopedData {

    public:
        ~ScopedData();
        void resetRecursive();
    };
};

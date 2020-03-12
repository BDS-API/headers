#pragma once

#include <string>
#include <ratio>
#include "../core/Path.h"
#include <vector>
#include "../core/OutputFileStream.h"


class ProfilerLite {

public:
    class ScopedData;

    static long sEmptyThreadID;
    static long gProfilerLiteInstance;

    void setSecondaryLogFileName(Core::Path const&);
    void logTimedEvent(std::string const&, double);
    void logScreenCreationEvent(std::string const&, double, unsigned char);
    void _calculateRealtimeFrameData();
    void getSecondsPerUpdate();
    void getDiskAccessStats(double &, double &);
    void shutdown();
    void getServerTickTime()const;
    void checkTreatmentsAndEnable(std::vector<std::string> const&);
    void getInstance();
    void closeLog(Core::OutputFileStream &);
    ~ProfilerLite();
    void tick(bool, bool, int, long, long, bool);
    bool isBenchmarkModeDone();
    void _writeHeadersIfEmpty(std::string const&, Core::Path, Core::OutputFileStream &);
    void setSecondaryScreenLoadLogFileName(Core::Path const&);
    void openLog(Core::Path const&, Core::OutputFileStream &);
//  void calculateAndSetServerTickTimes(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void init(Core::Path const&);
    void logToFile(std::string const&, Core::Path, Core::OutputFileStream &);
    void _shouldLogToSecondaryFile();
    void moveToEndOfString(char **, unsigned long &)const;
    void createLog(Core::Path const&, Core::OutputFileStream &);
//  void setTreatmentService(TreatmentService *); //TODO: incomplete function definition
    void getFileStats(unsigned int &, unsigned int &, double);
    void _getProfileStringRecursive(ProfilerLite::ScopedData &, unsigned long &, unsigned long &, char *&);
    ProfilerLite();
    void changeCurrentGamestateValue(std::string const&);
    void setSecondaryEventLogFileName(Core::Path const&);
    void getProfileString(char *, int);
    void reset();
    void setCanLogToSecondaryFile(bool);
//  void getNetworkStats(ProfilerLite::NetworkStats &, TrackerType); //TODO: incomplete function definition
    class ScopedData {

    public:
        ~ScopedData();
        void resetRecursive();
    };
};

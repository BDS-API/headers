#pragma once

class ProfilerLite {

public:
    static long sEmptyThreadID;
    static long gProfilerLiteInstance;


    void logTimedEvent(std::string const&, double);
    void ProfilerLite(void);
    void init(Core::Path const&);
    void reset(void);
    void createLog(Core::Path const&, Core::OutputFileStream &);
    void logToFile(std::string const&, Core::Path, Core::OutputFileStream &);
    void shutdown(void);
    void closeLog(Core::OutputFileStream &);
    bool isBenchmarkModeDone(void);
    void changeCurrentGamestateValue(std::string const&);
    void setTreatmentService(TreatmentService *);
    void setSecondaryLogFileName(Core::Path const&);
    void setSecondaryScreenLoadLogFileName(Core::Path const&);
    void setSecondaryEventLogFileName(Core::Path const&);
    void setCanLogToSecondaryFile(bool);
    void logScreenCreationEvent(std::string const&, double, unsigned char);
    void _shouldLogToSecondaryFile(void);
    void _writeHeadersIfEmpty(std::string const&, Core::Path, Core::OutputFileStream &);
    void calculateAndSetServerTickTimes(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void getServerTickTime(void)const;
    void checkTreatmentsAndEnable(std::vector<std::string, std::allocator<std::string>> const&);
    void moveToEndOfString(char **, unsigned long &)const;
    void openLog(Core::Path const&, Core::OutputFileStream &);
    void getNetworkStats(ProfilerLite::NetworkStats &, TrackerType);
    void getFileStats(unsigned int &, unsigned int &, double);
    void getDiskAccessStats(double &, double &);
    void _calculateRealtimeFrameData(void);
    void tick(bool, bool, int, long, long, bool);
    void _getProfileStringRecursive(ProfilerLite::ScopedData &, unsigned long &, unsigned long &, char *&);
    void getProfileString(char *, int);
    void getInstance(void);
    void getSecondsPerUpdate(void);
};

#pragma once

#include <string>
#include <vector>


class NetworkDebugManager {

public:
    class Tracker;

    static long UPDATE_INTERVAL_MILLISECONDS;
    static long MAX_NUMBER_OF_SAMPLES;
    static long mNetworkDebugManager;

//  void getNetworkStatistics(TrackerType); //TODO: incomplete function definition
    void registerStatisticsSource(NetworkStatistics &);
//  void trackReceive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
//  void getGraphBars(TrackerType)const; //TODO: incomplete function definition
    void initialize();
//  void getStats(TrackerType)const; //TODO: incomplete function definition
    void unregisterStatisticsSource(NetworkStatistics &);
    bool previousGraph();
    void getMode()const;
    void update();
    void resetData();
//  void send(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
    void _getGraphBars(std::string const&, int, std::vector<TrackerStat> const&)const;
//  void trackSend(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
//  void receive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
    void nextGraph();
    ~NetworkDebugManager();
    class Tracker {

    public:
        void trackSend(std::string const&, unsigned long);
        void update();
        Tracker();
        void getStats()const;
        void trackReceive(std::string const&, unsigned long);
        ~Tracker();
    };
};

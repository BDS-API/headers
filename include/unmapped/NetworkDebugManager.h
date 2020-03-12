#pragma once

#include <string>
#include <vector>
#include "../bedrock/network/packet/observer/NetworkStatistics.h"
#include "TrackerStat.h"


class NetworkDebugManager {

public:
    class Tracker;

    static long UPDATE_INTERVAL_MILLISECONDS;
    static long MAX_NUMBER_OF_SAMPLES;
    static long mNetworkDebugManager;

    void registerStatisticsSource(NetworkStatistics &);
//  void getStats(TrackerType)const; //TODO: incomplete function definition
//  void getNetworkStatistics(TrackerType); //TODO: incomplete function definition
    void update();
    bool previousGraph();
    void resetData();
//  void send(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
    void initialize();
//  void receive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
    void unregisterStatisticsSource(NetworkStatistics &);
    void nextGraph();
    void getMode()const;
//  void trackReceive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
//  void getGraphBars(TrackerType)const; //TODO: incomplete function definition
    ~NetworkDebugManager();
//  void trackSend(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
    void _getGraphBars(std::string const&, int, std::vector<TrackerStat> const&)const;
    class Tracker {

    public:
        Tracker();
        ~Tracker();
        void trackSend(std::string const&, unsigned long);
        void trackReceive(std::string const&, unsigned long);
        void update();
        void getStats()const;
    };
};

#pragma once

#include "../bedrock/network/packet/observer/NetworkStatistics.h"
#include <memory>
#include "./TrackerStat.h"
#include <vector>
#include <string>


class NetworkDebugManager {

public:
    static long UPDATE_INTERVAL_MILLISECONDS;
    static long MAX_NUMBER_OF_SAMPLES;
    static long mNetworkDebugManager;


    void initialize();
    void registerStatisticsSource(NetworkStatistics &);
    void unregisterStatisticsSource(NetworkStatistics &);
//  void getNetworkStatistics(TrackerType); //TODO: incomplete function definition
//  void trackSend(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
//  void trackReceive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
//  void send(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
//  void receive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition
    void update();
//  void getStats(TrackerType)const; //TODO: incomplete function definition
//  void getGraphBars(TrackerType)const; //TODO: incomplete function definition
    void _getGraphBars(std::string const&, int, std::vector<TrackerStat, std::allocator<TrackerStat>> const&)const;
    void getMode()const;
    void nextGraph();
    bool previousGraph();
    void resetData();
    ~NetworkDebugManager();
};

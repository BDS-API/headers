#pragma once

#include <string>
#include <vector>


class NetworkDebugManager {

public:
    class Tracker;

    static long UPDATE_INTERVAL_MILLISECONDS;
    static long MAX_NUMBER_OF_SAMPLES;
    static long mNetworkDebugManager;

    void initialize(); // _ZN19NetworkDebugManager10initializeEv
    void registerStatisticsSource(NetworkStatistics &); // _ZN19NetworkDebugManager24registerStatisticsSourceER17NetworkStatistics
    void unregisterStatisticsSource(NetworkStatistics &); // _ZN19NetworkDebugManager26unregisterStatisticsSourceER17NetworkStatistics
//  void getNetworkStatistics(TrackerType); //TODO: incomplete function definition // _ZN19NetworkDebugManager20getNetworkStatisticsE11TrackerType
//  void trackSend(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition // _ZN19NetworkDebugManager9trackSendE11TrackerTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
//  void trackReceive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition // _ZN19NetworkDebugManager12trackReceiveE11TrackerTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
//  void send(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition // _ZN19NetworkDebugManager4sendE11TrackerTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
//  void receive(TrackerType, std::string const&, unsigned long); //TODO: incomplete function definition // _ZN19NetworkDebugManager7receiveE11TrackerTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    void update(); // _ZN19NetworkDebugManager6updateEv
//  void getStats(TrackerType)const; //TODO: incomplete function definition // _ZNK19NetworkDebugManager8getStatsE11TrackerType
//  void getGraphBars(TrackerType)const; //TODO: incomplete function definition // _ZNK19NetworkDebugManager12getGraphBarsE11TrackerType
    void _getGraphBars(std::string const&, int, std::vector<TrackerStat> const&)const; // _ZNK19NetworkDebugManager13_getGraphBarsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRKSt6vectorI11TrackerStatSaIS9_EE
    void getMode()const; // _ZNK19NetworkDebugManager7getModeEv
    void nextGraph(); // _ZN19NetworkDebugManager9nextGraphEv
    bool previousGraph(); // _ZN19NetworkDebugManager13previousGraphEv
    void resetData(); // _ZN19NetworkDebugManager9resetDataEv
    ~NetworkDebugManager(); // _ZN19NetworkDebugManagerD2Ev
    class Tracker {

    public:
        void trackSend(std::string const&, unsigned long); // _ZN19NetworkDebugManager7Tracker9trackSendERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
        void trackReceive(std::string const&, unsigned long); // _ZN19NetworkDebugManager7Tracker12trackReceiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
        void update(); // _ZN19NetworkDebugManager7Tracker6updateEv
        void getStats()const; // _ZNK19NetworkDebugManager7Tracker8getStatsEv
        Tracker(); // _ZN19NetworkDebugManager7TrackerC2Ev
        ~Tracker(); // _ZN19NetworkDebugManager7TrackerD2Ev
    };
};

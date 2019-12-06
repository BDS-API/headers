#pragma once

class NetworkDebugManager {

public:
    static long NetworkDebugManager::UPDATE_INTERVAL_MILLISECONDS;
    static long NetworkDebugManager::MAX_NUMBER_OF_SAMPLES;
    static long NetworkDebugManager::mNetworkDebugManager;


    void initialize(void);
    void registerStatisticsSource(NetworkStatistics &);
    void unregisterStatisticsSource(NetworkStatistics &);
    void getNetworkStatistics(TrackerType);
    void trackSend(TrackerType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void trackReceive(TrackerType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void send(TrackerType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void receive(TrackerType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void update(void);
    void getStats(TrackerType)const;
    void getGraphBars(TrackerType)const;
    void _getGraphBars(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, std::vector<TrackerStat, std::allocator<TrackerStat>> const&)const;
    void getMode(void)const;
    void nextGraph(void);
    void previousGraph(void);
    void resetData(void);
};

#pragma once

#include <functional>
#include <string>
#include "PacketObserver.h"
#include <vector>


class NetworkStatistics : public PacketObserver {

public:
    class OverviewStats;
    class PacketStats;

    virtual ~NetworkStatistics(); // _ZN17NetworkStatisticsD2Ev
    virtual void __fake_function0(); // fake
    virtual void packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int); // _ZN17NetworkStatistics12packetSentToERK17NetworkIdentifierRK6Packetj
    virtual void packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int); // _ZN17NetworkStatistics18packetReceivedFromERK17NetworkIdentifierRK6Packetj
    virtual void dataSentTo__incomplete0(NetworkIdentifier const&, long); //TODO: incomplete function definition // _ZN17NetworkStatistics10dataSentToERK17NetworkIdentifierN3gsl17basic_string_spanIKcLln1EEE
    virtual void dataReceivedFrom(NetworkIdentifier const&, std::string const&); // _ZN17NetworkStatistics16dataReceivedFromERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//    NetworkStatistics(NetworkHandler &, long, std::function<bool (RakNet::RakNetStatistics &)> &&); //TODO: incomplete function definition // _ZN17NetworkStatisticsC2ER14NetworkHandler11TrackerTypeOSt8functionIFbRN6RakNet16RakNetStatisticsEEE
    void _initRakNetProfileTracking(); // _ZN17NetworkStatistics26_initRakNetProfileTrackingEv
    void reset(); // _ZN17NetworkStatistics5resetEv
    void pushStatsToProfiler()const; // _ZNK17NetworkStatistics19pushStatsToProfilerEv
    void _clearRakNetProfilingStats(); // _ZN17NetworkStatistics26_clearRakNetProfilingStatsEv
    void _clearCSVStats(); // _ZN17NetworkStatistics14_clearCSVStatsEv
    void getStats(int); // _ZN17NetworkStatistics8getStatsEi
    void tick(std::vector<Player *> const*); // _ZN17NetworkStatistics4tickEPKSt6vectorIP6PlayerSaIS2_EE
    void _logPeerConnectionInfo(std::vector<Player *> const&, bool)const; // _ZNK17NetworkStatistics22_logPeerConnectionInfoERKSt6vectorIP6PlayerSaIS2_EEb
    void _logPacketInfo()const; // _ZNK17NetworkStatistics14_logPacketInfoEv
    void updateCSV(double); // _ZN17NetworkStatistics9updateCSVEd
    std::string getVerboseInfo()const; // _ZNK17NetworkStatistics14getVerboseInfoB5cxx11Ev
    void getTotalPreviousSecond()const; // _ZNK17NetworkStatistics22getTotalPreviousSecondEv
    void getAverageLast10Seconds()const; // _ZNK17NetworkStatistics23getAverageLast10SecondsEv
    class OverviewStats {

    public:
        void operator+=(NetworkStatistics::OverviewStats const&); // _ZN17NetworkStatistics13OverviewStatspLERKS0_
    };
    class PacketStats {

    public:
        PacketStats(unsigned int); // _ZN17NetworkStatistics11PacketStatsC2Ej
        void operator+=(NetworkStatistics::PacketStats const&); // _ZN17NetworkStatistics11PacketStatspLERKS0_
    };
};

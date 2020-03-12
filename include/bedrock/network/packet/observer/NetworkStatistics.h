#pragma once

#include <string>
#include "PacketObserver.h"
#include <vector>
#include <functional>


class NetworkStatistics : PacketObserver {

public:
    class PacketStats;

//  virtual void dataSentTo(NetworkIdentifier const&, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    ~NetworkStatistics();
    virtual void packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void dataReceivedFrom(NetworkIdentifier const&, std::string const&);
    virtual void packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int);
//  NetworkStatistics(NetworkHandler &, TrackerType, std::function<bool (RakNet::RakNetStatistics &)> &&); //TODO: incomplete function definition
    std::string getVerboseInfo()const;
    void updateCSV(double);
    void _logPeerConnectionInfo(std::vector<Player *> const&, bool)const;
    void _logPacketInfo()const;
    void _initRakNetProfileTracking();
    void reset();
    void tick(std::vector<Player *> const*);
    void getAverageLast10Seconds()const;
    void pushStatsToProfiler()const;
    void getTotalPreviousSecond()const;
    void _clearRakNetProfilingStats();
    void _clearCSVStats();
    void getStats(int);
    class PacketStats {

    public:
        PacketStats(unsigned int);
    };
};

#pragma once

#include "../../../../unmapped/NetworkIdentifier.h"
#include <string>
#include "../../../actor/Player.h"
#include "PacketObserver.h"
#include <functional>
#include <vector>
#include "../Packet.h"
#include "../../../../unmapped/NetworkHandler.h"


class NetworkStatistics : PacketObserver {

public:
    class PacketStats;

    virtual void dataReceivedFrom(NetworkIdentifier const&, std::string const&);
    virtual void packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int);
//  virtual void dataSentTo(NetworkIdentifier const&, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    ~NetworkStatistics();
    void _initRakNetProfileTracking();
    void pushStatsToProfiler()const;
    void getStats(int);
    void _logPeerConnectionInfo(std::vector<Player *> const&, bool)const;
//  NetworkStatistics(NetworkHandler &, TrackerType, std::function<bool (RakNet::RakNetStatistics &)> &&); //TODO: incomplete function definition
    void updateCSV(double);
    std::string getVerboseInfo()const;
    void getAverageLast10Seconds()const;
    void reset();
    void _clearRakNetProfilingStats();
    void getTotalPreviousSecond()const;
    void _logPacketInfo()const;
    void _clearCSVStats();
    void tick(std::vector<Player *> const*);
    class PacketStats {

    public:
        PacketStats(unsigned int);
    };
};

#pragma once

#include <functional>
#include "../../../../unmapped/NetworkHandler.h"
#include "../../../actor/Player.h"
#include <memory>
#include "../Packet.h"
#include "./PacketObserver.h"
#include <vector>
#include "../../../../unmapped/NetworkIdentifier.h"
#include <string>


class NetworkStatistics : PacketObserver {

public:
    virtual ~NetworkStatistics();
    virtual void packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int);
//  virtual void dataSentTo(NetworkIdentifier const&, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void dataReceivedFrom(NetworkIdentifier const&, std::string const&);

//  NetworkStatistics(NetworkHandler &, TrackerType, std::function<bool (RakNet::RakNetStatistics &)> &&); //TODO: incomplete function definition
    void _initRakNetProfileTracking();
    void reset();
    void pushStatsToProfiler()const;
    void _clearRakNetProfilingStats();
    void _clearCSVStats();
    void getStats(int);
    void tick(std::vector<Player *, std::allocator<Player *>> const*);
    void _logPeerConnectionInfo(std::vector<Player *, std::allocator<Player *>> const&, bool)const;
    void _logPacketInfo()const;
    void updateCSV(double);
    std::string getVerboseInfo()const;
    void getTotalPreviousSecond()const;
    void getAverageLast10Seconds()const;
};

#pragma once

class NetworkStatistics : PacketObserver {

public:
    virtual NetworkStatistics::~NetworkStatistics();
    virtual void packetSentTo(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void packetReceivedFrom(NetworkIdentifier const&, Packet const&, unsigned int);
    virtual void dataSentTo(NetworkIdentifier const&, gsl::basic_string_span<char const, -1l>);
    virtual void dataReceivedFrom(NetworkIdentifier const&, std::string const&);

    NetworkStatistics(NetworkHandler &, TrackerType, std::function<bool ()(RakNet::RakNetStatistics &)> &&);
    void _initRakNetProfileTracking(void);
    void reset(void);
    void pushStatsToProfiler(void)const;
    void _clearRakNetProfilingStats(void);
    void _clearCSVStats(void);
    void getStats(int);
    void tick(std::vector<Player *, std::allocator<Player *>> const*);
    void _logPeerConnectionInfo(std::vector<Player *, std::allocator<Player *>> const&, bool)const;
    void _logPacketInfo(void)const;
    void updateCSV(double);
    void getTotalPreviousSecond(void)const;
    void getAverageLast10Seconds(void)const;
};

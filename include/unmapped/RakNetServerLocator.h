#pragma once

#include "../raknet/RakNetGUID"
#include "../raknet/Packet"


class RakNetServerLocator : ServerLocator {

public:
    virtual RakNetServerLocator::~RakNetServerLocator()
    virtual void announceServer(std::string const&, std::string const&, GameType, int, int, bool);
    virtual void stopAnnouncingServer();
    virtual void findServers(int, int);
    virtual void addCustomServer(AsynchronousIPResolver const&, int);
    virtual void addCustomServer(std::string const&, int);
    virtual void stopFindingServers();
    virtual void getServerList()const;
    virtual void clearServerList();
    virtual bool isIPv4Supported()const;
    virtual bool isIPv6Supported()const;
    virtual void setHostGUID(std::function<RakNet::RakNetGUID ()(void)>);
    virtual void getPingTimeForGUID(std::string const&);
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void ()(bool)>);

    RakNetServerLocator(RakNetInstance &, RakPeerHelper::IPSupportInterface &, bool);
    void _updateQueuedPings();
    void _addCustomServerFromIpResolver(AsynchronousIPResolver const&, int);
    void update();
    void handleUnconnectedPong(std::string const&, RakNet::Packet const*, bool, unsigned long);
    void _pingServerV4(std::string const&, int);
    void _pingServerV6(std::string const&, int);
    void activate();
    void _addCustomServerV4(AsynchronousIPResolver const&, int);
    void _addCustomServerV6(AsynchronousIPResolver const&, int);
    void _getHostGuid(std::string const&, int);
    void _onPingSend(std::string const&, std::string const&, int);
    void _getServerOriginalAddress(std::string &, std::string const&);
    void _onPongReceive(float &, RakNet::RakNetGUID const&, unsigned int const&, int);
    void _validateServerVersion(std::vector<std::string, std::allocator<std::string>> const&);
};

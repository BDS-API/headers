#pragma once

#include "ServerLocator.h"
#include <vector>
#include <string>
#include <functional>
#include "../raknet/RakNetGUID.h"


class RakNetServerLocator : ServerLocator {

public:
    class PingRateRecorder;

    virtual void findServers(int, int);
    virtual bool isIPv4Supported()const;
    virtual void clearServerList();
    virtual void addCustomServer(AsynchronousIPResolver const&, int);
    ~RakNetServerLocator();
    virtual void getPingTimeForGUID(std::string const&);
    virtual void addCustomServer(std::string const&, int);
    virtual void stopAnnouncingServer();
    virtual void getServerList()const;
    virtual void setHostGUID(std::function<RakNet::RakNetGUID (void)>);
    virtual bool isIPv6Supported()const;
//  virtual void announceServer(std::string const&, std::string const&, GameType, int, int, bool); //TODO: incomplete function definition
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (bool)>);
    virtual void stopFindingServers();
    void handleUnconnectedPong(std::string const&, RakNet::Packet const*, bool, unsigned long);
    void _pingServerV6(std::string const&, int);
    void activate();
    void _addCustomServerV6(AsynchronousIPResolver const&, int);
    RakNetServerLocator(RakNetInstance &, RakPeerHelper::IPSupportInterface &, bool);
    void _getServerOriginalAddress(std::string &, std::string const&);
    void _addCustomServerFromIpResolver(AsynchronousIPResolver const&, int);
    void _updateQueuedPings();
    void _pingServerV4(std::string const&, int);
    void _onPongReceive(float &, RakNet::RakNetGUID const&, unsigned int const&, int);
    void _onPingSend(std::string const&, std::string const&, int);
    void _getHostGuid(std::string const&, int);
    void _validateServerVersion(std::vector<std::string> const&);
    void update();
    void _addCustomServerV4(AsynchronousIPResolver const&, int);
    class PingRateRecorder {

    public:
        void getAverageLatency()const;
        ~PingRateRecorder();
        void _updateAverage(float);
        void getLastPingTime()const;
        void pingEnd(unsigned int const&, int);
        void pingStart(unsigned int const&, int);
        PingRateRecorder(unsigned int, bool);
    };
};

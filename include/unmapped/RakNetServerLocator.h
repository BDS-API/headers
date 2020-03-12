#pragma once

#include "AsynchronousIPResolver.h"
#include "ServerLocator.h"
#include <string>
#include "RakPeerHelper.h"
#include "../raknet/RakNetGUID.h"
#include "../raknet/Packet.h"
#include <functional>
#include "RakNetInstance.h"
#include <vector>


class RakNetServerLocator : ServerLocator {

public:
    class PingRateRecorder;

    virtual void addCustomServer(std::string const&, int);
    virtual void stopAnnouncingServer();
    virtual void setHostGUID(std::function<RakNet::RakNetGUID (void)>);
    virtual void checkCanConnectToCustomServerAsync(std::string, int, std::function<void (bool)>);
//  virtual void announceServer(std::string const&, std::string const&, GameType, int, int, bool); //TODO: incomplete function definition
    virtual void getServerList()const;
    virtual void clearServerList();
    virtual void findServers(int, int);
    virtual bool isIPv6Supported()const;
    virtual void stopFindingServers();
    virtual void addCustomServer(AsynchronousIPResolver const&, int);
    virtual void getPingTimeForGUID(std::string const&);
    ~RakNetServerLocator();
    virtual bool isIPv4Supported()const;
    void _addCustomServerV4(AsynchronousIPResolver const&, int);
    void _validateServerVersion(std::vector<std::string> const&);
    void _updateQueuedPings();
    void handleUnconnectedPong(std::string const&, RakNet::Packet const*, bool, unsigned long);
    RakNetServerLocator(RakNetInstance &, RakPeerHelper::IPSupportInterface &, bool);
    void _pingServerV6(std::string const&, int);
    void _onPingSend(std::string const&, std::string const&, int);
    void activate();
    void _onPongReceive(float &, RakNet::RakNetGUID const&, unsigned int const&, int);
    void update();
    void _getHostGuid(std::string const&, int);
    void _addCustomServerV6(AsynchronousIPResolver const&, int);
    void _getServerOriginalAddress(std::string &, std::string const&);
    void _pingServerV4(std::string const&, int);
    void _addCustomServerFromIpResolver(AsynchronousIPResolver const&, int);
    class PingRateRecorder {

    public:
        void getLastPingTime()const;
        void pingEnd(unsigned int const&, int);
        void pingStart(unsigned int const&, int);
        PingRateRecorder(unsigned int, bool);
        void _updateAverage(float);
        void getAverageLatency()const;
        ~PingRateRecorder();
    };
};

#pragma once

#include "./ConnectionCallbacks.h"
#include "../raknet/SystemAddress.h"
#include "../bedrock/definition/ConnectionDefinition.h"
#include "./Connector.h"
#include "./GameConnectionInfo.h"
#include "./IPSupportInterface.h"
#include "./NetworkIdentifier.h"
#include <functional>
#include <string>


class RakNetInstance : Connector {

public:
    virtual ~RakNetInstance();
    virtual void onAppResumed();
    virtual void onAppSuspended();
    virtual std::string getLocalIps()const;
    virtual std::string getLocalIp();
    virtual void getPort()const;
    virtual void getRefinedLocalIps()const;
    virtual void getConnectedGameInfo()const;
    virtual void setupNatPunch(bool);
    virtual void getNatPunchInfo()const;
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual bool isIPv4Supported()const;
    virtual bool isIPv6Supported()const;
    virtual void getIPv4Port()const;
    virtual void getIPv6Port()const;
    virtual void getGUID()const;

    bool isServer()const;
    RakNetInstance(RakNetInstance::ConnectionCallbacks &, RakPeerHelper::IPSupportInterface &);
    void _storeLocalIP();
    void _startupIfNeeded(ConnectionDefinition);
    void host(ConnectionDefinition const&);
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void _openNatConnection(RakNet::SystemAddress const&);
    void disconnect();
//  void _changeNatState(RakNetInstance::NATState, int, std::string const&); //TODO: incomplete function definition
    void getPeer();
    void getPeer()const;
    bool isMyLocalId(NetworkIdentifier const&);
    void _createPeer(NetworkIdentifier const&);
    void runEvents();
    void natPongReceived(RakNet::SystemAddress const&);
    void tick();
    void _pingNatService(bool);
//  void getPingTimeForConnection(std::string const&, int, std::function<void (unsigned int)>); //TODO: incomplete function definition
//  void getStatistics(RakNet::RakNetStatistics &); //TODO: incomplete function definition
//  void _stateToString(RakNetInstance::NATState)const; //TODO: incomplete function definition
};

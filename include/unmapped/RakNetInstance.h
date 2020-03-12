#pragma once

#include "RakPeerHelper.h"
#include <string>
#include "NetworkIdentifier.h"
#include "../raknet/SystemAddress.h"
#include "../raknet/RakPeerInterface.h"
#include <functional>
#include "../bedrock/network/NetworkPeer.h"
#include "../bedrock/definition/ConnectionDefinition.h"
#include "GameConnectionInfo.h"
#include "Connector.h"


class RakNetInstance : Connector {

public:
    class ConnectionCallbacks;
    class NatConnectionInfo;
    class PingCallbackData;
    class RakNetNetworkPeer;

    virtual std::string getLocalIp();
    virtual void onAppResumed();
    ~RakNetInstance();
    virtual std::string getLocalIps()const;
    virtual void onAppSuspended();
    virtual void getPort()const;
    virtual void getConnectedGameInfo()const;
    virtual void getNatPunchInfo()const;
    virtual void getRefinedLocalIps()const;
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual bool isIPv4Supported()const;
    virtual void setupNatPunch(bool);
    virtual bool isIPv6Supported()const;
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual void getIPv4Port()const;
    virtual void getIPv6Port()const;
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
    virtual void getGUID()const;
    bool isMyLocalId(NetworkIdentifier const&);
    RakNetInstance(RakNetInstance::ConnectionCallbacks &, RakPeerHelper::IPSupportInterface &);
//  void _stateToString(RakNetInstance::NATState)const; //TODO: incomplete function definition
    void getPingTimeForConnection(std::string const&, int, std::function<void (unsigned int)>);
    void tick();
    void _startupIfNeeded(ConnectionDefinition);
    void disconnect();
    void _openNatConnection(RakNet::SystemAddress const&);
    void _createPeer(NetworkIdentifier const&);
    void _storeLocalIP();
//  void getStatistics(RakNet::RakNetStatistics &); //TODO: incomplete function definition
    void getPeer();
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void host(ConnectionDefinition const&);
    void natPongReceived(RakNet::SystemAddress const&);
    void getPeer()const;
    bool isServer()const;
//  void _changeNatState(RakNetInstance::NATState, int, std::string const&); //TODO: incomplete function definition
    void runEvents();
    void _pingNatService(bool);
    class ConnectionCallbacks {

    public:
        ~ConnectionCallbacks();
        ConnectionCallbacks();
    };
    class NatConnectionInfo {

    public:
        NatConnectionInfo();
    };
    class PingCallbackData {

    public:
        PingCallbackData(RakNetInstance::PingCallbackData &&);
        ~PingCallbackData();
    };
    class RakNetNetworkPeer : NetworkPeer {

    public:
//      virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
        virtual void getNetworkStatus();
        ~RakNetNetworkPeer();
        virtual void update();
        virtual void receivePacket(std::string &);
        void newData(std::string);
        RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
//      void getReliability(NetworkPeer::Reliability); //TODO: incomplete function definition
    };
};

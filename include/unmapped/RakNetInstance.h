#pragma once

#include "../bedrock/network/NetworkPeer.h"
#include "Connector.h"
#include <string>
#include "../bedrock/definition/ConnectionDefinition.h"
#include <functional>
#include "GameConnectionInfo.h"


class RakNetInstance : Connector {

public:
    class ConnectionCallbacks;
    class NatConnectionInfo;
    class PingCallbackData;
    class RakNetNetworkPeer;

    ~RakNetInstance();
    virtual void onAppResumed();
    virtual void getIPv6Port()const;
    virtual std::string getLocalIp();
    virtual void getRefinedLocalIps()const;
    virtual void getConnectedGameInfo()const;
    virtual void getPort()const;
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
    virtual std::string getLocalIps()const;
    virtual bool isIPv4Supported()const;
    virtual void setupNatPunch(bool);
    virtual bool isIPv6Supported()const;
    virtual void getGUID()const;
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual void getIPv4Port()const;
    virtual void getNatPunchInfo()const;
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual void onAppSuspended();
    void natPongReceived(RakNet::SystemAddress const&);
//  void _changeNatState(RakNetInstance::NATState, int, std::string const&); //TODO: incomplete function definition
//  void _stateToString(RakNetInstance::NATState)const; //TODO: incomplete function definition
    void runEvents();
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void getPeer()const;
    void _storeLocalIP();
    void tick();
    void getPingTimeForConnection(std::string const&, int, std::function<void (unsigned int)>);
    void disconnect();
//  void getStatistics(RakNet::RakNetStatistics &); //TODO: incomplete function definition
    bool isMyLocalId(NetworkIdentifier const&);
    void _createPeer(NetworkIdentifier const&);
    RakNetInstance(RakNetInstance::ConnectionCallbacks &, RakPeerHelper::IPSupportInterface &);
    void _pingNatService(bool);
    void getPeer();
    bool isServer()const;
    void _openNatConnection(RakNet::SystemAddress const&);
    void host(ConnectionDefinition const&);
    void _startupIfNeeded(ConnectionDefinition);
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
        ~PingCallbackData();
        PingCallbackData(RakNetInstance::PingCallbackData &&);
    };
    class RakNetNetworkPeer : NetworkPeer {

    public:
//      virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition
        virtual void update();
        ~RakNetNetworkPeer();
        virtual void receivePacket(std::string &);
        virtual void getNetworkStatus();
        RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&);
//      void getReliability(NetworkPeer::Reliability); //TODO: incomplete function definition
        void newData(std::string);
    };
};

#pragma once

class RakNetInstance : Connector {

public:
    virtual RakNetInstance::~RakNetInstance();
    virtual void onAppResumed(void);
    virtual void onAppSuspended(void);
    virtual void getLocalIps[abi:cxx11](void)const;
    virtual void getLocalIp[abi:cxx11](void);
    virtual void getPort(void)const;
    virtual void getRefinedLocalIps(void)const;
    virtual void getConnectedGameInfo(void)const;
    virtual void setupNatPunch(bool);
    virtual void getNatPunchInfo(void)const;
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
    virtual void addConnectionStateListener(Connector::ConnectionStateListener *);
    virtual void removeConnectionStateListener(Connector::ConnectionStateListener *);
    virtual bool isIPv4Supported(void)const;
    virtual bool isIPv6Supported(void)const;
    virtual void getIPv4Port(void)const;
    virtual void getIPv6Port(void)const;
    virtual void getGUID(void)const;

    bool isServer(void)const;
    RakNetInstance(RakNetInstance::ConnectionCallbacks &, RakPeerHelper::IPSupportInterface &);
    void _storeLocalIP(void);
    void _startupIfNeeded(ConnectionDefinition);
    void host(ConnectionDefinition const&);
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void _openNatConnection(RakNet::SystemAddress const&);
    void disconnect(void);
    void _changeNatState(RakNetInstance::NATState, int, std::string const&);
    void getPeer(void);
    void getPeer(void)const;
    bool isMyLocalId(NetworkIdentifier const&);
    void _createPeer(NetworkIdentifier const&);
    void runEvents(void);
    void natPongReceived(RakNet::SystemAddress const&);
    void tick(void);
    void _pingNatService(bool);
    void getPingTimeForConnection(std::string const&, int, std::function<void ()(unsigned int)>);
    void getStatistics(RakNet::RakNetStatistics &);
    void _stateToString(RakNetInstance::NATState)const;
};

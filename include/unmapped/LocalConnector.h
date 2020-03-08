#pragma once



class LocalConnector : Connector {

public:
    static long sLocalConnectivitySystem;

    virtual LocalConnector::~LocalConnector();
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

    LocalConnector(LocalConnector::ConnectionCallbacks &, NetworkIdentifier const&);
    void disconnect(void);
    void host(NetworkIdentifier const&);
    void connect(NetworkIdentifier const&);
    void createPeer(LocalConnector&);
    void onRemoteDisconnected(LocalConnector const&);
    void runEvents(void);
};

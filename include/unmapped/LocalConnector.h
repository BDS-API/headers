#pragma once

#include "NetworkIdentifier.h"
#include "Connector.h"
#include "GameConnectionInfo.h"


class LocalConnector : Connector {

public:
    class ConnectionCallbacks;

    static long sLocalConnectivitySystem;

    virtual void getIPv6Port()const;
    ~LocalConnector();
    virtual void onAppSuspended();
    virtual std::string getLocalIp();
    virtual bool isIPv4Supported()const;
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual void setupNatPunch(bool);
    virtual void getConnectedGameInfo()const;
    virtual void getPort()const;
    virtual bool isIPv6Supported()const;
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual void getIPv4Port()const;
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
    virtual std::string getLocalIps()const;
    virtual void onAppResumed();
    virtual void getNatPunchInfo()const;
    virtual void getGUID()const;
    virtual void getRefinedLocalIps()const;
    void onRemoteDisconnected(LocalConnector const&);
    void connect(NetworkIdentifier const&);
    LocalConnector(LocalConnector::ConnectionCallbacks &, NetworkIdentifier const&);
    void host(NetworkIdentifier const&);
    void disconnect();
    void runEvents();
    void createPeer(LocalConnector &);
    class ConnectionCallbacks {

    public:
        ~ConnectionCallbacks();
        ConnectionCallbacks();
    };
};

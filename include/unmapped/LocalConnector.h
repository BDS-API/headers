#pragma once

#include <string>
#include "Connector.h"
#include "GameConnectionInfo.h"


class LocalConnector : Connector {

public:
    class ConnectionCallbacks;

    static long sLocalConnectivitySystem;

    ~LocalConnector();
    virtual void getIPv6Port()const;
    virtual void onAppResumed();
    virtual void getRefinedLocalIps()const;
    virtual bool isIPv6Supported()const;
    virtual void getPort()const;
    virtual std::string getLocalIp();
    virtual void setupNatPunch(bool);
    virtual void onAppSuspended();
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition
    virtual void getNatPunchInfo()const;
    virtual std::string getLocalIps()const;
    virtual bool isIPv4Supported()const;
    virtual void getGUID()const;
    virtual void getIPv4Port()const;
    virtual void getConnectedGameInfo()const;
    void connect(NetworkIdentifier const&);
    void createPeer(LocalConnector &);
    void disconnect();
    void onRemoteDisconnected(LocalConnector const&);
    LocalConnector(LocalConnector::ConnectionCallbacks &, NetworkIdentifier const&);
    void host(NetworkIdentifier const&);
    void runEvents();
    class ConnectionCallbacks {

    public:
        ~ConnectionCallbacks();
        ConnectionCallbacks();
    };
};

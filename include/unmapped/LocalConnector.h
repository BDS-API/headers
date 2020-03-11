#pragma once

#include "./ConnectionCallbacks.h"
#include "./LocalConnector.h"
#include "./Connector.h"
#include "./GameConnectionInfo.h"
#include "./NetworkIdentifier.h"
#include <string>


class LocalConnector : Connector {

public:
    static long sLocalConnectivitySystem;

    virtual ~LocalConnector();
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

    LocalConnector(LocalConnector::ConnectionCallbacks &, NetworkIdentifier const&);
    void disconnect();
    void host(NetworkIdentifier const&);
    void connect(NetworkIdentifier const&);
    void createPeer(LocalConnector &);
    void onRemoteDisconnected(LocalConnector const&);
    void runEvents();
};

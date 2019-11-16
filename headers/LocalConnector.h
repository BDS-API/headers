#pragma once

class LocalConnector : Connector {

    virtual void LocalConnector::~LocalConnector();
    virtual void LocalConnector::~LocalConnector();
    virtual void onAppResumed(void);
    virtual void onAppSuspended(void);
    virtual void _ZNK14LocalConnector11getLocalIpsB5cxx11Ev;
    virtual void _ZN14LocalConnector10getLocalIpB5cxx11Ev;
    virtual void getPort(void)const;
    virtual void getRefinedLocalIps(void)const;
    virtual void getConnectedGameInfo(void)const;
    virtual void setupNatPunch(bool);
    virtual void getNatPunchInfo(void)const;
    virtual void startNatPunchingClient(Social::GameConnectionInfo);
    virtual void addConnectionStateListener(Connector::ConnectionStateListener *);
    virtual void removeConnectionStateListener(Connector::ConnectionStateListener *);
    virtual void isIPv4Supported(void)const;
    virtual void isIPv6Supported(void)const;
    virtual void getIPv4Port(void)const;
    virtual void getIPv6Port(void)const;
    virtual void getGUID(void)const;
}

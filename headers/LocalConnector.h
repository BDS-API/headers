#pragma once

class LocalConnector : Connector {

    virtual void Local~LocalConnector();
    virtual void Local~LocalConnector();
    virtual void LocalonAppResumed(void);
    virtual void LocalonAppSuspended(void);
    virtual void _ZNK14LocalConnector11getLocalIpsB5cxx11Ev;
    virtual void _ZN14LocalConnector10getLocalIpB5cxx11Ev;
    virtual void LocalgetPort(void)const;
    virtual void LocalgetRefinedLocalIps(void)const;
    virtual void LocalgetConnectedGameInfo(void)const;
    virtual void LocalsetupNatPunch(bool);
    virtual void LocalgetNatPunchInfo(void)const;
    virtual void LocalstartNatPunchingClient(Social::GameConnectionInfo);
    virtual void LocaladdConnectionStateListener(Connector::ConnectionStateListener *);
    virtual void LocalremoveConnectionStateListener(Connector::ConnectionStateListener *);
    virtual void LocalisIPv4Supported(void)const;
    virtual void LocalisIPv6Supported(void)const;
    virtual void LocalgetIPv4Port(void)const;
    virtual void LocalgetIPv6Port(void)const;
    virtual void LocalgetGUID(void)const;
}

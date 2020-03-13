#pragma once

#include <string>
#include "Connector.h"
#include "GameConnectionInfo.h"


class LocalConnector : Connector {

public:
    class ConnectionCallbacks;

    static long sLocalConnectivitySystem;

    ~LocalConnector(); // _ZN14LocalConnectorD2Ev
    virtual void onAppResumed(); // _ZN14LocalConnector12onAppResumedEv
    virtual void onAppSuspended(); // _ZN14LocalConnector14onAppSuspendedEv
    virtual std::string getLocalIps()const; // _ZNK14LocalConnector11getLocalIpsB5cxx11Ev
    virtual std::string getLocalIp(); // _ZN14LocalConnector10getLocalIpB5cxx11Ev
    virtual void getPort()const; // _ZNK14LocalConnector7getPortEv
    virtual void getRefinedLocalIps()const; // _ZNK14LocalConnector18getRefinedLocalIpsEv
    virtual void getConnectedGameInfo()const; // _ZNK14LocalConnector20getConnectedGameInfoEv
    virtual void setupNatPunch(bool); // _ZN14LocalConnector13setupNatPunchEb
    virtual void getNatPunchInfo()const; // _ZNK14LocalConnector15getNatPunchInfoEv
    virtual void startNatPunchingClient(Social::GameConnectionInfo); // _ZN14LocalConnector22startNatPunchingClientEN6Social18GameConnectionInfoE
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition // _ZN14LocalConnector26addConnectionStateListenerEPN9Connector23ConnectionStateListenerE
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition // _ZN14LocalConnector29removeConnectionStateListenerEPN9Connector23ConnectionStateListenerE
    virtual bool isIPv4Supported()const; // _ZNK14LocalConnector15isIPv4SupportedEv
    virtual bool isIPv6Supported()const; // _ZNK14LocalConnector15isIPv6SupportedEv
    virtual void getIPv4Port()const; // _ZNK14LocalConnector11getIPv4PortEv
    virtual void getIPv6Port()const; // _ZNK14LocalConnector11getIPv6PortEv
    virtual void getGUID()const; // _ZNK14LocalConnector7getGUIDEv
    LocalConnector(LocalConnector::ConnectionCallbacks &, NetworkIdentifier const&); // _ZN14LocalConnectorC2ERNS_19ConnectionCallbacksERK17NetworkIdentifier
    void disconnect(); // _ZN14LocalConnector10disconnectEv
    void host(NetworkIdentifier const&); // _ZN14LocalConnector4hostERK17NetworkIdentifier
    void connect(NetworkIdentifier const&); // _ZN14LocalConnector7connectERK17NetworkIdentifier
    void createPeer(LocalConnector &); // _ZN14LocalConnector10createPeerERS_
    void onRemoteDisconnected(LocalConnector const&); // _ZN14LocalConnector20onRemoteDisconnectedERKS_
    void runEvents(); // _ZN14LocalConnector9runEventsEv
    class ConnectionCallbacks {

    public:
        ~ConnectionCallbacks(); // _ZN14LocalConnector19ConnectionCallbacksD2Ev
        ConnectionCallbacks(); // _ZN14LocalConnector19ConnectionCallbacksC2Ev
    };
};

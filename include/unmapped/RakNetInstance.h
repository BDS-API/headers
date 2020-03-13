#pragma once

#include "GameConnectionInfo.h"
#include <string>
#include "RakPeerHelper.h"
#include "../bedrock/network/NetworkPeer.h"
#include "../bedrock/definition/ConnectionDefinition.h"
#include <functional>
#include "Connector.h"


class RakNetInstance : Connector {

public:
    class ConnectionCallbacks;
    class NatConnectionInfo;
    class PingCallbackData;
    class RakNetNetworkPeer;

    ~RakNetInstance(); // _ZN14RakNetInstanceD2Ev
    virtual void onAppResumed(); // _ZN14RakNetInstance12onAppResumedEv
    virtual void onAppSuspended(); // _ZN14RakNetInstance14onAppSuspendedEv
    virtual std::string getLocalIps()const; // _ZNK14RakNetInstance11getLocalIpsB5cxx11Ev
    virtual std::string getLocalIp(); // _ZN14RakNetInstance10getLocalIpB5cxx11Ev
    virtual void getPort()const; // _ZNK14RakNetInstance7getPortEv
    virtual void getRefinedLocalIps()const; // _ZNK14RakNetInstance18getRefinedLocalIpsEv
    virtual void getConnectedGameInfo()const; // _ZNK14RakNetInstance20getConnectedGameInfoEv
    virtual void setupNatPunch(bool); // _ZN14RakNetInstance13setupNatPunchEb
    virtual void getNatPunchInfo()const; // _ZNK14RakNetInstance15getNatPunchInfoEv
    virtual void startNatPunchingClient(Social::GameConnectionInfo); // _ZN14RakNetInstance22startNatPunchingClientEN6Social18GameConnectionInfoE
//  virtual void addConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition // _ZN14RakNetInstance26addConnectionStateListenerEPN9Connector23ConnectionStateListenerE
//  virtual void removeConnectionStateListener(Connector::ConnectionStateListener *); //TODO: incomplete function definition // _ZN14RakNetInstance29removeConnectionStateListenerEPN9Connector23ConnectionStateListenerE
    virtual bool isIPv4Supported()const; // _ZNK14RakNetInstance15isIPv4SupportedEv
    virtual bool isIPv6Supported()const; // _ZNK14RakNetInstance15isIPv6SupportedEv
    virtual void getIPv4Port()const; // _ZNK14RakNetInstance11getIPv4PortEv
    virtual void getIPv6Port()const; // _ZNK14RakNetInstance11getIPv6PortEv
    virtual void getGUID()const; // _ZNK14RakNetInstance7getGUIDEv
    bool isServer()const; // _ZNK14RakNetInstance8isServerEv
    RakNetInstance(RakNetInstance::ConnectionCallbacks &, RakPeerHelper::IPSupportInterface &); // _ZN14RakNetInstanceC2ERNS_19ConnectionCallbacksERN13RakPeerHelper18IPSupportInterfaceE
    void _storeLocalIP(); // _ZN14RakNetInstance13_storeLocalIPEv
    void _startupIfNeeded(ConnectionDefinition); // _ZN14RakNetInstance16_startupIfNeededE20ConnectionDefinition
    void host(ConnectionDefinition const&); // _ZN14RakNetInstance4hostERK20ConnectionDefinition
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo); // _ZN14RakNetInstance7connectEN6Social18GameConnectionInfoES1_
    void _openNatConnection(RakNet::SystemAddress const&); // _ZN14RakNetInstance18_openNatConnectionERKN6RakNet13SystemAddressE
    void disconnect(); // _ZN14RakNetInstance10disconnectEv
//  void _changeNatState(RakNetInstance::NATState, int, std::string const&); //TODO: incomplete function definition // _ZN14RakNetInstance15_changeNatStateENS_8NATStateEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPeer(); // _ZN14RakNetInstance7getPeerEv
    void getPeer()const; // _ZNK14RakNetInstance7getPeerEv
    bool isMyLocalId(NetworkIdentifier const&); // _ZN14RakNetInstance11isMyLocalIdERK17NetworkIdentifier
    void _createPeer(NetworkIdentifier const&); // _ZN14RakNetInstance11_createPeerERK17NetworkIdentifier
    void runEvents(); // _ZN14RakNetInstance9runEventsEv
    void natPongReceived(RakNet::SystemAddress const&); // _ZN14RakNetInstance15natPongReceivedERKN6RakNet13SystemAddressE
    void tick(); // _ZN14RakNetInstance4tickEv
    void _pingNatService(bool); // _ZN14RakNetInstance15_pingNatServiceEb
    void getPingTimeForConnection(std::string const&, int, std::function<void (unsigned int)>); // _ZN14RakNetInstance24getPingTimeForConnectionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt8functionIFvjEE
//  void getStatistics(RakNet::RakNetStatistics &); //TODO: incomplete function definition // _ZN14RakNetInstance13getStatisticsERN6RakNet16RakNetStatisticsE
//  void _stateToString(RakNetInstance::NATState)const; //TODO: incomplete function definition // _ZNK14RakNetInstance14_stateToStringENS_8NATStateE
    class ConnectionCallbacks {

    public:
        ~ConnectionCallbacks(); // _ZN14RakNetInstance19ConnectionCallbacksD2Ev
        ConnectionCallbacks(); // _ZN14RakNetInstance19ConnectionCallbacksC2Ev
    };
    class NatConnectionInfo {

    public:
        NatConnectionInfo(); // _ZN14RakNetInstance17NatConnectionInfoC2Ev
    };
    class PingCallbackData {

    public:
        ~PingCallbackData(); // _ZN14RakNetInstance16PingCallbackDataD2Ev
        PingCallbackData(RakNetInstance::PingCallbackData &&); // _ZN14RakNetInstance16PingCallbackDataC2EOS0_
    };
    class RakNetNetworkPeer : NetworkPeer {

    public:
        ~RakNetNetworkPeer(); // _ZN14RakNetInstance17RakNetNetworkPeerD2Ev
//      virtual void sendPacket(std::string const&, NetworkPeer::Reliability, int, unsigned short, Compressibility); //TODO: incomplete function definition // _ZN14RakNetInstance17RakNetNetworkPeer10sendPacketERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN11NetworkPeer11ReliabilityEit15Compressibility
        virtual void receivePacket(std::string &); // _ZN14RakNetInstance17RakNetNetworkPeer13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        virtual void getNetworkStatus(); // _ZN14RakNetInstance17RakNetNetworkPeer16getNetworkStatusEv
        virtual void update(); // _ZN14RakNetInstance17RakNetNetworkPeer6updateEv
        void newData(std::string); // _ZN14RakNetInstance17RakNetNetworkPeer7newDataENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        RakNetNetworkPeer(RakNet::RakPeerInterface &, NetworkIdentifier const&); // _ZN14RakNetInstance17RakNetNetworkPeerC2ERN6RakNet16RakPeerInterfaceERK17NetworkIdentifier
//      void getReliability(NetworkPeer::Reliability); //TODO: incomplete function definition // _ZN14RakNetInstance17RakNetNetworkPeer14getReliabilityEN11NetworkPeer11ReliabilityE
    };
};

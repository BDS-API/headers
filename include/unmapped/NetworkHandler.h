#pragma once

#include <vector>
#include "GameConnectionInfo.h"
#include <memory>
#include <string>
#include "RakNetInstance.h"
#include "RakPeerHelper.h"
#include "LocalConnector.h"
#include <functional>


class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

public:
    class Connection;
    class IncomingPacketQueue;

    ~NetworkHandler(); // _ZN14NetworkHandlerD2Ev
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>); // _ZN14NetworkHandler23onNewIncomingConnectionERK17NetworkIdentifierSt10shared_ptrI11NetworkPeerE
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>); // _ZN14NetworkHandler23onNewOutgoingConnectionERK17NetworkIdentifierSt10shared_ptrI11NetworkPeerE
    virtual void onConnectionClosed(NetworkIdentifier const&, std::string const&, bool); // _ZN14NetworkHandler18onConnectionClosedERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void onAllConnectionsClosed(std::string const&, bool); // _ZN14NetworkHandler22onAllConnectionsClosedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void onOutgoingConnectionFailed(); // _ZN14NetworkHandler26onOutgoingConnectionFailedEv
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>); // _ZN14NetworkHandler18onWebsocketRequestERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_St8functionIFvvEE
    virtual void useIPv4Only()const; // _ZNK14NetworkHandler11useIPv4OnlyEv
    virtual void useIPv6Only()const; // _ZNK14NetworkHandler11useIPv6OnlyEv
    virtual void getDefaultGamePort()const; // _ZNK14NetworkHandler18getDefaultGamePortEv
    virtual void getDefaultGamePortv6()const; // _ZNK14NetworkHandler20getDefaultGamePortv6Ev
    virtual void onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>); // _ZN14NetworkHandler28onNewIncomingLocalConnectionERK17NetworkIdentifierSt10shared_ptrI11NetworkPeerE
    virtual void onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>); // _ZN14NetworkHandler28onNewOutgoingLocalConnectionERK17NetworkIdentifierSt10shared_ptrI11NetworkPeerE
//  NetworkHandler(Scheduler &, NetworkHandler::NetworkStatisticsConfig); //TODO: incomplete function definition // _ZN14NetworkHandlerC2ER9SchedulerNS_23NetworkStatisticsConfigE
    void getPrimaryNetworkId()const; // _ZNK14NetworkHandler19getPrimaryNetworkIdEv
    void host(ConnectionDefinition const&); // _ZN14NetworkHandler4hostERK20ConnectionDefinition
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo); // _ZN14NetworkHandler7connectEN6Social18GameConnectionInfoES1_
    void disconnect(); // _ZN14NetworkHandler10disconnectEv
    void update(std::vector<Player *> const*); // _ZN14NetworkHandler6updateEPKSt6vectorIP6PlayerSaIS2_EE
    void runEvents(bool); // _ZN14NetworkHandler9runEventsEb
    void registerClientInstance(NetEventCallback &, unsigned char); // _ZN14NetworkHandler22registerClientInstanceER16NetEventCallbackh
    void registerServerInstance(NetEventCallback &); // _ZN14NetworkHandler22registerServerInstanceER16NetEventCallback
    void unregisterClientOrServerInstance(unsigned char const&); // _ZN14NetworkHandler32unregisterClientOrServerInstanceERKh
    void _getConnectionFromId(NetworkIdentifier const&)const; // _ZNK14NetworkHandler20_getConnectionFromIdERK17NetworkIdentifier
//  void _sortAndPacketizeEvents(NetworkHandler::Connection &, std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition // _ZN14NetworkHandler23_sortAndPacketizeEventsERNS_10ConnectionENSt6chrono10time_pointINS2_3_V212system_clockENS2_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    void cleanupResourcePackManager(NetworkIdentifier const&); // _ZN14NetworkHandler26cleanupResourcePackManagerERK17NetworkIdentifier
    void setUseIPv6Only(bool); // _ZN14NetworkHandler14setUseIPv6OnlyEb
    void setDefaultGamePort(unsigned short); // _ZN14NetworkHandler18setDefaultGamePortEt
    void setDefaultGamePortv6(unsigned short); // _ZN14NetworkHandler20setDefaultGamePortv6Et
    void enableAsyncFlush(NetworkIdentifier const&); // _ZN14NetworkHandler16enableAsyncFlushERK17NetworkIdentifier
    void getPingTimeForConnection(Social::GameConnectionInfo const&, std::function<void (unsigned int)>); // _ZN14NetworkHandler24getPingTimeForConnectionERKN6Social18GameConnectionInfoESt8functionIFvjEE
    void getNetworkStatistics()const; // _ZNK14NetworkHandler20getNetworkStatisticsEv
    void getConnectionInfo()const; // _ZNK14NetworkHandler17getConnectionInfoEv
    void getPeerForUser(NetworkIdentifier const&); // _ZN14NetworkHandler14getPeerForUserERK17NetworkIdentifier
    void getEncryptedPeerForUser(NetworkIdentifier const&); // _ZN14NetworkHandler23getEncryptedPeerForUserERK17NetworkIdentifier
    void getNetworkPacketRecorderForUser(NetworkIdentifier const&); // _ZN14NetworkHandler31getNetworkPacketRecorderForUserERK17NetworkIdentifier
    bool isServer()const; // _ZNK14NetworkHandler8isServerEv
    bool isLocalConnectionId(NetworkIdentifier const&)const; // _ZNK14NetworkHandler19isLocalConnectionIdERK17NetworkIdentifier
    bool isHostingPlayer(NetworkIdentifier const&, unsigned char const&)const; // _ZNK14NetworkHandler15isHostingPlayerERK17NetworkIdentifierRKh
    void setHostingPlayerIdentity(NetworkIdentifier const&, unsigned char const&); // _ZN14NetworkHandler24setHostingPlayerIdentityERK17NetworkIdentifierRKh
    void getServerId()const; // _ZNK14NetworkHandler11getServerIdEv
    void resetLocalNetworkId(); // _ZN14NetworkHandler19resetLocalNetworkIdEv
    void getLocalNetworkId()const; // _ZNK14NetworkHandler17getLocalNetworkIdEv
    void send(NetworkIdentifier const&, Packet const&, unsigned char); // _ZN14NetworkHandler4sendERK17NetworkIdentifierRK6Packeth
    void _sendInternal(NetworkIdentifier const&, Packet const&, std::string const&); // _ZN14NetworkHandler13_sendInternalERK17NetworkIdentifierRK6PacketRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void sendToMultiple(std::vector<NetworkIdentifierWithSubId> const&, Packet const&); // _ZN14NetworkHandler14sendToMultipleERKSt6vectorI26NetworkIdentifierWithSubIdSaIS1_EERK6Packet
    void flush(NetworkIdentifier const&, std::function<void (void)> &&); // _ZN14NetworkHandler5flushERK17NetworkIdentifierOSt8functionIFvvEE
    void getConnections()const; // _ZNK14NetworkHandler14getConnectionsEv
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&); // _ZN14NetworkHandler28getResourcePackUploadManagerER12PacketSenderRK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&); // _ZN14NetworkHandler30getResourcePackDownloadManagerER12PacketSenderRK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getResourcePackDownloadManager(std::string const&)const; // _ZNK14NetworkHandler30getResourcePackDownloadManagerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getServerLocator(); // _ZN14NetworkHandler16getServerLocatorEv
    void getConnector(); // _ZN14NetworkHandler12getConnectorEv
    void getUPnPInterface(); // _ZN14NetworkHandler16getUPnPInterfaceEv
    void setCloseConnection(NetworkIdentifier const&); // _ZN14NetworkHandler18setCloseConnectionERK17NetworkIdentifier
    void setConnectionChannelPaused(NetworkIdentifier const&, unsigned int, bool); // _ZN14NetworkHandler26setConnectionChannelPausedERK17NetworkIdentifierjb
    void closeConnection(NetworkIdentifier const&, std::string const&); // _ZN14NetworkHandler15closeConnectionERK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setPacketObserver(PacketObserver *); // _ZN14NetworkHandler17setPacketObserverEP14PacketObserver
    void getCompressionThresholdBytesize(); // _ZN14NetworkHandler31getCompressionThresholdBytesizeEv
    void setCompressionThresholdBytesize(unsigned short); // _ZN14NetworkHandler31setCompressionThresholdBytesizeEt
    void registerNetworkPacketEventListener(NetworkPacketEventListener &); // _ZN14NetworkHandler34registerNetworkPacketEventListenerER26NetworkPacketEventListener
    void unregisterNetworkPacketEventListener(NetworkPacketEventListener &); // _ZN14NetworkHandler36unregisterNetworkPacketEventListenerER26NetworkPacketEventListener
    class Connection {

    public:
        void update(); // _ZN14NetworkHandler10Connection6updateEv
        void setChannelPaused(unsigned int, bool); // _ZN14NetworkHandler10Connection16setChannelPausedEjb
        void receivePacket(std::string &); // _ZN14NetworkHandler10Connection13receivePacketERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//      Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>, bool, PacketObserver *, Scheduler &); //TODO: incomplete function definition // _ZN14NetworkHandler10ConnectionC2ERK17NetworkIdentifierSt10shared_ptrI11NetworkPeerENSt6chrono10time_pointINS7_3_V212steady_clockENS7_8durationIlSt5ratioILl1ELl1000000000EEEEEEbP14PacketObserverR9Scheduler
        bool isChannelPaused(unsigned int)const; // _ZNK14NetworkHandler10Connection15isChannelPausedEj
        ~Connection(); // _ZN14NetworkHandler10ConnectionD2Ev
    };
    class IncomingPacketQueue {

    public:
        IncomingPacketQueue(NetEventCallback &); // _ZN14NetworkHandler19IncomingPacketQueueC2ER16NetEventCallback
    };
};

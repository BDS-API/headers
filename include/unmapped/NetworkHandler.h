#pragma once

#include "../bedrock/network/NetEventCallback"
#include "../bedrock/network/NetworkPeer"
#include "../bedrock/actor/Player"
#include "../bedrock/network/packet/sender/PacketSender"
#include "../bedrock/definition/ConnectionDefinition"
#include "../bedrock/network/packet/observer/PacketObserver"
#include "../bedrock/network/packet/Packet"
#include "../bedrock/Scheduler"


class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

public:
    virtual NetworkHandler::~NetworkHandler()
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onConnectionClosed(NetworkIdentifier const&, std::string const&, bool);
    virtual void onAllConnectionsClosed(std::string const&, bool);
    virtual void onOutgoingConnectionFailed();
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);
    virtual void useIPv4Only()const;
    virtual void useIPv6Only()const;
    virtual void getDefaultGamePort()const;
    virtual void getDefaultGamePortv6()const;
    virtual void onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);

    NetworkHandler(Scheduler &, NetworkHandler::NetworkStatisticsConfig);
    void getPrimaryNetworkId()const;
    void host(ConnectionDefinition const&);
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void disconnect();
    void update(std::vector<Player *, std::allocator<Player *>> const*);
    void runEvents(bool);
    void registerClientInstance(NetEventCallback &, unsigned char);
    void registerServerInstance(NetEventCallback &);
    void unregisterClientOrServerInstance(unsigned char const&);
    void _getConnectionFromId(NetworkIdentifier const&)const;
    void _sortAndPacketizeEvents(NetworkHandler::Connection &, std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void cleanupResourcePackManager(NetworkIdentifier const&);
    void setUseIPv6Only(bool);
    void setDefaultGamePort(unsigned short);
    void setDefaultGamePortv6(unsigned short);
    void enableAsyncFlush(NetworkIdentifier const&);
    void getPingTimeForConnection(Social::GameConnectionInfo const&, std::function<void ()(unsigned int)>);
    void getNetworkStatistics()const;
    void getConnectionInfo()const;
    void getPeerForUser(NetworkIdentifier const&);
    void getEncryptedPeerForUser(NetworkIdentifier const&);
    void getNetworkPacketRecorderForUser(NetworkIdentifier const&);
    bool isServer()const;
    bool isLocalConnectionId(NetworkIdentifier const&)const;
    bool isHostingPlayer(NetworkIdentifier const&, unsigned char const&)const;
    void setHostingPlayerIdentity(NetworkIdentifier const&, unsigned char const&);
    void getServerId()const;
    void resetLocalNetworkId();
    void getLocalNetworkId()const;
    void send(NetworkIdentifier const&, Packet const&, unsigned char);
    void _sendInternal(NetworkIdentifier const&, Packet const&, std::string const&);
    void sendToMultiple(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId>> const&, Packet const&);
    void flush(NetworkIdentifier const&, std::function<void ()(void)> &&);
    void getConnections()const;
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(std::string const&)const;
    void getServerLocator();
    void getConnector();
    void getUPnPInterface();
    void setCloseConnection(NetworkIdentifier const&);
    void setConnectionChannelPaused(NetworkIdentifier const&, unsigned int, bool);
    void closeConnection(NetworkIdentifier const&, std::string const&);
    void setPacketObserver(PacketObserver *);
    void getCompressionThresholdBytesize();
    void setCompressionThresholdBytesize(unsigned short);
    void registerNetworkPacketEventListener(NetworkPacketEventListener &);
    void unregisterNetworkPacketEventListener(NetworkPacketEventListener &);
};

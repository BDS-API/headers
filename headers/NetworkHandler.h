#pragma once

class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

public:
    virtual ~NetworkHandler();
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onConnectionClosed(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void onAllConnectionsClosed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void onOutgoingConnectionFailed(void);
    virtual void onWebsocketRequest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(void)>);
    virtual void useIPv4Only(void)const;
    virtual void useIPv6Only(void)const;
    virtual void getDefaultGamePort(void)const;
    virtual void getDefaultGamePortv6(void)const;
    virtual void onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);

    void NetworkHandler(Scheduler &, NetworkHandler::NetworkStatisticsConfig);
    void getPrimaryNetworkId(void)const;
    void host(ConnectionDefinition const&);
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void disconnect(void);
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
    void getNetworkStatistics(void)const;
    void getConnectionInfo(void)const;
    void getPeerForUser(NetworkIdentifier const&);
    void getEncryptedPeerForUser(NetworkIdentifier const&);
    void getNetworkPacketRecorderForUser(NetworkIdentifier const&);
    bool isServer(void)const;
    bool isLocalConnectionId(NetworkIdentifier const&)const;
    bool isHostingPlayer(NetworkIdentifier const&, unsigned char const&)const;
    void setHostingPlayerIdentity(NetworkIdentifier const&, unsigned char const&);
    void getServerId(void)const;
    void resetLocalNetworkId(void);
    void getLocalNetworkId(void)const;
    void send(NetworkIdentifier const&, Packet const&, unsigned char);
    void _sendInternal(NetworkIdentifier const&, Packet const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendToMultiple(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId>> const&, Packet const&);
    void flush(NetworkIdentifier const&, std::function<void ()(void)> &&);
    void getConnections(void)const;
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getResourcePackDownloadManager(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getServerLocator(void);
    void getConnector(void);
    void getUPnPInterface(void);
    void setCloseConnection(NetworkIdentifier const&);
    void setConnectionChannelPaused(NetworkIdentifier const&, unsigned int, bool);
    void closeConnection(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setPacketObserver(PacketObserver *);
    void getCompressionThresholdBytesize(void);
    void setCompressionThresholdBytesize(unsigned short);
    void registerNetworkPacketEventListener(NetworkPacketEventListener &);
    void unregisterNetworkPacketEventListener(NetworkPacketEventListener &);
};

#pragma once

#include <memory>
#include "LocalConnector.h"
#include <vector>
#include <string>
#include <functional>
#include "RakNetInstance.h"
#include "RakPeerHelper.h"
#include "GameConnectionInfo.h"


class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

public:
    class Connection;
    class IncomingPacketQueue;

    ~NetworkHandler();
    virtual void onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onOutgoingConnectionFailed();
    virtual void onConnectionClosed(NetworkIdentifier const&, std::string const&, bool);
    virtual void onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void getDefaultGamePort()const;
    virtual void getDefaultGamePortv6()const;
    virtual void onAllConnectionsClosed(std::string const&, bool);
    virtual void useIPv4Only()const;
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>);
    virtual void useIPv6Only()const;
    void update(std::vector<Player *> const*);
    void enableAsyncFlush(NetworkIdentifier const&);
    bool isLocalConnectionId(NetworkIdentifier const&)const;
    void _sendInternal(NetworkIdentifier const&, Packet const&, std::string const&);
    void getNetworkPacketRecorderForUser(NetworkIdentifier const&);
    void resetLocalNetworkId();
    void registerNetworkPacketEventListener(NetworkPacketEventListener &);
    void getConnections()const;
    void getPingTimeForConnection(Social::GameConnectionInfo const&, std::function<void (unsigned int)>);
    void getPeerForUser(NetworkIdentifier const&);
//  NetworkHandler(Scheduler &, NetworkHandler::NetworkStatisticsConfig); //TODO: incomplete function definition
    void getCompressionThresholdBytesize();
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void unregisterClientOrServerInstance(unsigned char const&);
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getConnector();
    void disconnect();
    void getServerId()const;
    void cleanupResourcePackManager(NetworkIdentifier const&);
    void setDefaultGamePort(unsigned short);
    void getConnectionInfo()const;
    void getLocalNetworkId()const;
    void getNetworkStatistics()const;
    void setPacketObserver(PacketObserver *);
    void host(ConnectionDefinition const&);
//  void _sortAndPacketizeEvents(NetworkHandler::Connection &, std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void sendToMultiple(std::vector<NetworkIdentifierWithSubId> const&, Packet const&);
    bool isServer()const;
    void registerServerInstance(NetEventCallback &);
    void unregisterNetworkPacketEventListener(NetworkPacketEventListener &);
    void registerClientInstance(NetEventCallback &, unsigned char);
    void setCompressionThresholdBytesize(unsigned short);
    bool isHostingPlayer(NetworkIdentifier const&, unsigned char const&)const;
    void send(NetworkIdentifier const&, Packet const&, unsigned char);
    void flush(NetworkIdentifier const&, std::function<void (void)> &&);
    void _getConnectionFromId(NetworkIdentifier const&)const;
    void getServerLocator();
    void runEvents(bool);
    void closeConnection(NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(std::string const&)const;
    void setDefaultGamePortv6(unsigned short);
    void getPrimaryNetworkId()const;
    void setUseIPv6Only(bool);
    void setCloseConnection(NetworkIdentifier const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void setHostingPlayerIdentity(NetworkIdentifier const&, unsigned char const&);
    void setConnectionChannelPaused(NetworkIdentifier const&, unsigned int, bool);
    void getEncryptedPeerForUser(NetworkIdentifier const&);
    void getUPnPInterface();
    class Connection {

    public:
//      Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>, bool, PacketObserver *, Scheduler &); //TODO: incomplete function definition
        ~Connection();
        void setChannelPaused(unsigned int, bool);
        void receivePacket(std::string &);
        bool isChannelPaused(unsigned int)const;
        void update();
    };
    class IncomingPacketQueue {

    public:
        IncomingPacketQueue(NetEventCallback &);
    };
};

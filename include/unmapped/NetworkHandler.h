#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/network/packet/Packet.h"
#include "RakNetInstance.h"
#include <memory>
#include "../bedrock/network/packet/observer/PacketObserver.h"
#include "LocalConnector.h"
#include <string>
#include "RakPeerHelper.h"
#include <functional>
#include "../bedrock/network/NetworkPeer.h"
#include "../bedrock/Scheduler.h"
#include <vector>
#include "../bedrock/definition/ConnectionDefinition.h"
#include "NetworkPacketEventListener.h"
#include "NetworkIdentifier.h"
#include <ratio>
#include "../bedrock/network/packet/sender/PacketSender.h"
#include "../bedrock/network/NetEventCallback.h"
#include "GameConnectionInfo.h"


class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

public:
    class Connection;
    class IncomingPacketQueue;

    virtual void onOutgoingConnectionFailed();
    virtual void getDefaultGamePort()const;
    virtual void getDefaultGamePortv6()const;
    virtual void onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void (void)>);
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    ~NetworkHandler();
    virtual void onAllConnectionsClosed(std::string const&, bool);
    virtual void useIPv6Only()const;
    virtual void onConnectionClosed(NetworkIdentifier const&, std::string const&, bool);
    virtual void useIPv4Only()const;
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    void registerClientInstance(NetEventCallback &, unsigned char);
    void getNetworkPacketRecorderForUser(NetworkIdentifier const&);
    void setDefaultGamePortv6(unsigned short);
    void getCompressionThresholdBytesize();
    void unregisterClientOrServerInstance(unsigned char const&);
    void getConnectionInfo()const;
    void getServerId()const;
    void getConnections()const;
    void getResourcePackDownloadManager(std::string const&)const;
    void getUPnPInterface();
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void update(std::vector<Player *> const*);
    void runEvents(bool);
    void setDefaultGamePort(unsigned short);
    void getPrimaryNetworkId()const;
    void _sendInternal(NetworkIdentifier const&, Packet const&, std::string const&);
    void getPingTimeForConnection(Social::GameConnectionInfo const&, std::function<void (unsigned int)>);
    void _getConnectionFromId(NetworkIdentifier const&)const;
    void setPacketObserver(PacketObserver *);
    void flush(NetworkIdentifier const&, std::function<void (void)> &&);
    void registerServerInstance(NetEventCallback &);
    void setUseIPv6Only(bool);
    void closeConnection(NetworkIdentifier const&, std::string const&);
    void setCloseConnection(NetworkIdentifier const&);
    void setConnectionChannelPaused(NetworkIdentifier const&, unsigned int, bool);
//  NetworkHandler(Scheduler &, NetworkHandler::NetworkStatisticsConfig); //TODO: incomplete function definition
    void cleanupResourcePackManager(NetworkIdentifier const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void setHostingPlayerIdentity(NetworkIdentifier const&, unsigned char const&);
    bool isHostingPlayer(NetworkIdentifier const&, unsigned char const&)const;
//  void _sortAndPacketizeEvents(NetworkHandler::Connection &, std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void connect(Social::GameConnectionInfo, Social::GameConnectionInfo);
    void send(NetworkIdentifier const&, Packet const&, unsigned char);
    void unregisterNetworkPacketEventListener(NetworkPacketEventListener &);
    void getPeerForUser(NetworkIdentifier const&);
    bool isLocalConnectionId(NetworkIdentifier const&)const;
    void getConnector();
    void getNetworkStatistics()const;
    void setCompressionThresholdBytesize(unsigned short);
    void getLocalNetworkId()const;
    void registerNetworkPacketEventListener(NetworkPacketEventListener &);
    bool isServer()const;
//  void sendToMultiple(std::vector<NetworkIdentifierWithSubId> const&, Packet const&); //TODO: incomplete function definition
    void getServerLocator();
    void resetLocalNetworkId();
    void host(ConnectionDefinition const&);
    void enableAsyncFlush(NetworkIdentifier const&);
    void getEncryptedPeerForUser(NetworkIdentifier const&);
    void disconnect();
    class Connection {

    public:
        void receivePacket(std::string &);
//      Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>, bool, PacketObserver *, Scheduler &); //TODO: incomplete function definition
        bool isChannelPaused(unsigned int)const;
        void setChannelPaused(unsigned int, bool);
        void update();
        ~Connection();
    };
    class IncomingPacketQueue {

    public:
        IncomingPacketQueue(NetEventCallback &);
    };
};

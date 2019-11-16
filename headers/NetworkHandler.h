#pragma once

class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

    virtual ~NetworkHandler();
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
    virtual void ;
    virtual void `non-virtual thunk to'NetworkHandler::~NetworkHandler();
    virtual void `non-virtual thunk to'NetworkHandler::~NetworkHandler();
    virtual void `non-virtual thunk to'NetworkHandler::useIPv4Only(void)const;
    virtual void `non-virtual thunk to'NetworkHandler::useIPv6Only(void)const;
    virtual void `non-virtual thunk to'NetworkHandler::getDefaultGamePort(void)const;
    virtual void `non-virtual thunk to'NetworkHandler::getDefaultGamePortv6(void)const;
    virtual void ;
    virtual void `non-virtual thunk to'NetworkHandler::~NetworkHandler();
    virtual void `non-virtual thunk to'NetworkHandler::~NetworkHandler();
    virtual void `non-virtual thunk to'NetworkHandler::onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void `non-virtual thunk to'NetworkHandler::onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void `non-virtual thunk to'NetworkHandler::onConnectionClosed(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void `non-virtual thunk to'NetworkHandler::onOutgoingConnectionFailed(void);
}

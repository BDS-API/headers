#pragma once

class NetworkHandler : RakNetInstance::ConnectionCallbacks, RakPeerHelper::IPSupportInterface, LocalConnector::ConnectionCallbacks {

    virtual void ~NetworkHandler();
    virtual void ~NetworkHandler();
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
    virtual void `non-virtual thunk to'~NetworkHandler();
    virtual void `non-virtual thunk to'~NetworkHandler();
    virtual void `non-virtual thunk to'useIPv4Only(void)const;
    virtual void `non-virtual thunk to'useIPv6Only(void)const;
    virtual void `non-virtual thunk to'getDefaultGamePort(void)const;
    virtual void `non-virtual thunk to'getDefaultGamePortv6(void)const;
    virtual void ;
    virtual void `non-virtual thunk to'~NetworkHandler();
    virtual void `non-virtual thunk to'~NetworkHandler();
    virtual void `non-virtual thunk to'onNewIncomingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void `non-virtual thunk to'onNewOutgoingLocalConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void `non-virtual thunk to'onConnectionClosed(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void `non-virtual thunk to'onOutgoingConnectionFailed(void);
}

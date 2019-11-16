#pragma once

class RakPeerHelper::IPSupportInterface {

    virtual void RakPeerHelper::IPSupportInterface::~IPSupportInterface();
    virtual void RakPeerHelper::IPSupportInterface::~IPSupportInterface();
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onConnectionClosed(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void onAllConnectionsClosed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
}

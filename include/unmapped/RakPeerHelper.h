#pragma once

#include "../raknet/SocketDescriptor"
#include "../raknet/RakPeerInterface"
#include "../bedrock/definition/ConnectionDefinition"


class RakPeerHelper {

public:

    RakPeerHelper(RakPeerHelper::IPSupportInterface &);
    void peerStartup(RakNet::RakPeerInterface *, ConnectionDefinition const&);
    bool isIPv4Supported()const;
    bool isIPv6Supported()const;
    void _resetToIPv6Only(RakNet::SocketDescriptor *, int &);
    void _startupInternal(RakNet::RakPeerInterface *, ConnectionDefinition const&, RakNet::SocketDescriptor *, int &, int);
    void LogIPSupport();
    void getIPv4BoundPort()const;
    void getIPv6BoundPort()const;
    void getResult()const;
    void getIPv4ConnectionIndex()const;
    void getIPv6ConnectionIndex()const;
    void getConnectionIndex(Social::GameConnectionInfo const&)const;
};

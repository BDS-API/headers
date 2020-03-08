#pragma once

#include "../raknet/SocketDescriptor"
#include "../raknet/RakPeerInterface"


class RakPeerHelper {

public:

    RakPeerHelper(RakPeerHelper::IPSupportInterface &);
    void peerStartup(RakNet::RakPeerInterface *, ConnectionDefinition const&);
    bool isIPv4Supported(void)const;
    bool isIPv6Supported(void)const;
    void _resetToIPv6Only(RakNet::SocketDescriptor *, int &);
    void _startupInternal(RakNet::RakPeerInterface *, ConnectionDefinition const&, RakNet::SocketDescriptor *, int &, int);
    void LogIPSupport(void);
    void getIPv4BoundPort(void)const;
    void getIPv6BoundPort(void)const;
    void getResult(void)const;
    void getIPv4ConnectionIndex(void)const;
    void getIPv6ConnectionIndex(void)const;
    void getConnectionIndex(Social::GameConnectionInfo const&)const;
};

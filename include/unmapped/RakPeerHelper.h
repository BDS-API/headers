#pragma once

#include "../raknet/RakPeerInterface.h"
#include "../raknet/SocketDescriptor.h"
#include "../bedrock/definition/ConnectionDefinition.h"
#include "GameConnectionInfo.h"


class RakPeerHelper {

public:
    class IPSupportInterface;

    void getResult()const;
    void peerStartup(RakNet::RakPeerInterface *, ConnectionDefinition const&);
    bool isIPv6Supported()const;
    void _resetToIPv6Only(RakNet::SocketDescriptor *, int &);
    void getIPv4ConnectionIndex()const;
    void getConnectionIndex(Social::GameConnectionInfo const&)const;
    void LogIPSupport();
    void getIPv6ConnectionIndex()const;
    void _startupInternal(RakNet::RakPeerInterface *, ConnectionDefinition const&, RakNet::SocketDescriptor *, int &, int);
    RakPeerHelper(RakPeerHelper::IPSupportInterface &);
    void getIPv4BoundPort()const;
    bool isIPv4Supported()const;
    void getIPv6BoundPort()const;
    class IPSupportInterface {

    public:
        ~IPSupportInterface();
        IPSupportInterface();
    };
};

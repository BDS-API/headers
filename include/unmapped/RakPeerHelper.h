#pragma once



class RakPeerHelper {

public:
    class IPSupportInterface;

    RakPeerHelper(RakPeerHelper::IPSupportInterface &);
    void _resetToIPv6Only(RakNet::SocketDescriptor *, int &);
    void getIPv6ConnectionIndex()const;
    void _startupInternal(RakNet::RakPeerInterface *, ConnectionDefinition const&, RakNet::SocketDescriptor *, int &, int);
    void LogIPSupport();
    void peerStartup(RakNet::RakPeerInterface *, ConnectionDefinition const&);
    bool isIPv4Supported()const;
    bool isIPv6Supported()const;
    void getIPv4BoundPort()const;
    void getConnectionIndex(Social::GameConnectionInfo const&)const;
    void getIPv4ConnectionIndex()const;
    void getResult()const;
    void getIPv6BoundPort()const;
    class IPSupportInterface {

    public:
        ~IPSupportInterface();
        IPSupportInterface();
    };
};

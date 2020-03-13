#pragma once



class RakPeerHelper {

public:
    class IPSupportInterface;

    RakPeerHelper(RakPeerHelper::IPSupportInterface &); // _ZN13RakPeerHelperC2ERNS_18IPSupportInterfaceE
    void peerStartup(RakNet::RakPeerInterface *, ConnectionDefinition const&); // _ZN13RakPeerHelper11peerStartupEPN6RakNet16RakPeerInterfaceERK20ConnectionDefinition
    bool isIPv4Supported()const; // _ZNK13RakPeerHelper15isIPv4SupportedEv
    bool isIPv6Supported()const; // _ZNK13RakPeerHelper15isIPv6SupportedEv
    void _resetToIPv6Only(RakNet::SocketDescriptor *, int &); // _ZN13RakPeerHelper16_resetToIPv6OnlyEPN6RakNet16SocketDescriptorERi
    void _startupInternal(RakNet::RakPeerInterface *, ConnectionDefinition const&, RakNet::SocketDescriptor *, int &, int); // _ZN13RakPeerHelper16_startupInternalEPN6RakNet16RakPeerInterfaceERK20ConnectionDefinitionPNS0_16SocketDescriptorERii
    void LogIPSupport(); // _ZN13RakPeerHelper12LogIPSupportEv
    void getIPv4BoundPort()const; // _ZNK13RakPeerHelper16getIPv4BoundPortEv
    void getIPv6BoundPort()const; // _ZNK13RakPeerHelper16getIPv6BoundPortEv
    void getResult()const; // _ZNK13RakPeerHelper9getResultEv
    void getIPv4ConnectionIndex()const; // _ZNK13RakPeerHelper22getIPv4ConnectionIndexEv
    void getIPv6ConnectionIndex()const; // _ZNK13RakPeerHelper22getIPv6ConnectionIndexEv
    void getConnectionIndex(Social::GameConnectionInfo const&)const; // _ZNK13RakPeerHelper18getConnectionIndexERKN6Social18GameConnectionInfoE
    class IPSupportInterface {

    public:
        ~IPSupportInterface(); // _ZN13RakPeerHelper18IPSupportInterfaceD2Ev
        IPSupportInterface(); // _ZN13RakPeerHelper18IPSupportInterfaceC2Ev
    };
};

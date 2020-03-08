#pragma once



using namespace RakNet;

class PluginInterface2 {

public:
    virtual void RakNet::PluginInterface2::~PluginInterface2();
    virtual void OnAttach(void);
    virtual void OnDetach(void);
    virtual void Update(void);
    virtual void OnReceive(RakNet::Packet *);
    virtual void OnRakPeerStartup(void);
    virtual void OnRakPeerShutdown(void);
    virtual void OnClosedConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, RakNet::PI2_LostConnectionReason);
    virtual void OnNewConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, bool);
    virtual void OnFailedConnectionAttempt(RakNet::Packet *, RakNet::PI2_FailedConnectionAttemptReason);
    virtual void UsesReliabilityLayer(void)const;
    virtual void OnDirectSocketSend(char const*, unsigned int, RakNet::SystemAddress);
    virtual void OnDirectSocketReceive(char const*, unsigned int, RakNet::SystemAddress);
    virtual void OnReliabilityLayerNotification(char const*, unsigned int, RakNet::SystemAddress, bool);
    virtual void OnInternalPacket(RakNet::InternalPacket *, unsigned int, RakNet::SystemAddress, unsigned int, int);
    virtual void OnAck(unsigned int, RakNet::SystemAddress, unsigned int);
    virtual void OnPushBackPacket(char const*, unsigned int, RakNet::SystemAddress);

    PluginInterface2(void);
    void SendUnified(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool);
    void GetMyGUIDUnified(void)const;
    void SendUnified(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool);
    void AllocatePacketUnified(unsigned int);
    void PushBackPacketUnified(RakNet::Packet *, bool);
    void DeallocPacketUnified(RakNet::Packet *);
    void SendListUnified(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool);
    void SetRakPeerInterface(RakNet::RakPeerInterface *);
    void SetTCPInterface(RakNet::TCPInterface *);
};

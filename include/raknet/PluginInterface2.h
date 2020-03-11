#pragma once

#include "./SystemAddress.h"
#include "./TCPInterface.h"
#include "./Packet.h"
#include "./InternalPacket.h"
#include "./RakNetGUID.h"
#include "./BitStream.h"
#include "./RakPeerInterface.h"
#include "./AddressOrGUID.h"


namespace RakNet {

class PluginInterface2 {

public:
    virtual ~PluginInterface2();
    virtual void OnAttach();
    virtual void OnDetach();
    virtual void Update();
    virtual void OnReceive(RakNet::Packet *);
    virtual void OnRakPeerStartup();
    virtual void OnRakPeerShutdown();
//  virtual void OnClosedConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, RakNet::PI2_LostConnectionReason); //TODO: incomplete function definition
    virtual void OnNewConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, bool);
//  virtual void OnFailedConnectionAttempt(RakNet::Packet *, RakNet::PI2_FailedConnectionAttemptReason); //TODO: incomplete function definition
    virtual bool UsesReliabilityLayer()const;
    virtual void OnDirectSocketSend(char const*, unsigned int, RakNet::SystemAddress);
    virtual void OnDirectSocketReceive(char const*, unsigned int, RakNet::SystemAddress);
    virtual void OnReliabilityLayerNotification(char const*, unsigned int, RakNet::SystemAddress, bool);
    virtual void OnInternalPacket(RakNet::InternalPacket *, unsigned int, RakNet::SystemAddress, unsigned int, int);
    virtual void OnAck(unsigned int, RakNet::SystemAddress, unsigned int);
    virtual void OnPushBackPacket(char const*, unsigned int, RakNet::SystemAddress);

    PluginInterface2();
//  void SendUnified(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
    void GetMyGUIDUnified()const;
//  void SendUnified(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
    void AllocatePacketUnified(unsigned int);
    void PushBackPacketUnified(RakNet::Packet *, bool);
    void DeallocPacketUnified(RakNet::Packet *);
//  void SendListUnified(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
    void SetRakPeerInterface(RakNet::RakPeerInterface *);
    void SetTCPInterface(RakNet::TCPInterface *);
};

}
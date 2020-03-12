#pragma once

#include "AddressOrGUID.h"
#include "TCPInterface.h"
#include "SystemAddress.h"
#include "RakNetGUID.h"
#include "BitStream.h"
#include "InternalPacket.h"
#include "RakPeerInterface.h"
#include "Packet.h"


namespace RakNet {

    class PluginInterface2 {

    public:
        virtual void OnAttach();
        virtual void OnPushBackPacket(char const*, unsigned int, RakNet::SystemAddress);
//      virtual void OnClosedConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, RakNet::PI2_LostConnectionReason); //TODO: incomplete function definition
        virtual void OnAck(unsigned int, RakNet::SystemAddress, unsigned int);
        virtual void OnNewConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, bool);
        virtual void OnRakPeerShutdown();
        virtual void OnDetach();
//      virtual void OnFailedConnectionAttempt(RakNet::Packet *, RakNet::PI2_FailedConnectionAttemptReason); //TODO: incomplete function definition
        virtual void OnInternalPacket(RakNet::InternalPacket *, unsigned int, RakNet::SystemAddress, unsigned int, int);
        virtual void Update();
        ~PluginInterface2();
        virtual void OnDirectSocketSend(char const*, unsigned int, RakNet::SystemAddress);
        virtual void OnDirectSocketReceive(char const*, unsigned int, RakNet::SystemAddress);
        virtual bool UsesReliabilityLayer()const;
        virtual void OnReliabilityLayerNotification(char const*, unsigned int, RakNet::SystemAddress, bool);
        virtual void OnReceive(RakNet::Packet *);
        virtual void OnRakPeerStartup();
        void AllocatePacketUnified(unsigned int);
        void SetRakPeerInterface(RakNet::RakPeerInterface *);
//      void SendUnified(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
        void SetTCPInterface(RakNet::TCPInterface *);
        PluginInterface2();
//      void SendUnified(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
        void GetMyGUIDUnified()const;
//      void SendListUnified(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
        void DeallocPacketUnified(RakNet::Packet *);
        void PushBackPacketUnified(RakNet::Packet *, bool);
    };
}

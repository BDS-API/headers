#pragma once

#include "AddressOrGUID.h"
#include "RakNetGUID.h"
#include "SystemAddress.h"


namespace RakNet {

    class PluginInterface2 {

    public:
        virtual void OnAck(unsigned int, RakNet::SystemAddress, unsigned int);
        virtual void OnRakPeerShutdown();
        virtual void OnDirectSocketReceive(char const*, unsigned int, RakNet::SystemAddress);
        virtual void OnPushBackPacket(char const*, unsigned int, RakNet::SystemAddress);
        virtual void OnDetach();
        virtual void OnAttach();
        virtual void OnNewConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, bool);
        virtual void OnInternalPacket(RakNet::InternalPacket *, unsigned int, RakNet::SystemAddress, unsigned int, int);
        virtual void OnReceive(RakNet::Packet *);
        virtual void OnRakPeerStartup();
//      virtual void OnFailedConnectionAttempt(RakNet::Packet *, RakNet::PI2_FailedConnectionAttemptReason); //TODO: incomplete function definition
        virtual void OnReliabilityLayerNotification(char const*, unsigned int, RakNet::SystemAddress, bool);
        virtual bool UsesReliabilityLayer()const;
//      virtual void OnClosedConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, RakNet::PI2_LostConnectionReason); //TODO: incomplete function definition
        ~PluginInterface2();
        virtual void Update();
        virtual void OnDirectSocketSend(char const*, unsigned int, RakNet::SystemAddress);
        PluginInterface2();
        void PushBackPacketUnified(RakNet::Packet *, bool);
        void GetMyGUIDUnified()const;
//      void SendUnified(RakNet::BitStream const*, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
        void SetRakPeerInterface(RakNet::RakPeerInterface *);
        void AllocatePacketUnified(unsigned int);
        void SetTCPInterface(RakNet::TCPInterface *);
//      void SendUnified(char const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
        void DeallocPacketUnified(RakNet::Packet *);
//      void SendListUnified(char const**, int const*, int, PacketPriority, PacketReliability, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition
    };
}

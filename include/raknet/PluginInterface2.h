#pragma once

#include "AddressOrGUID.h"
#include "SystemAddress.h"
#include "RakNetGUID.h"


namespace RakNet {

    class PluginInterface2 {

    public:
        virtual ~PluginInterface2(); // _ZN6RakNet16PluginInterface2D2Ev
        virtual void __fake_function0(); // fake
        virtual void OnAttach(); // _ZN6RakNet16PluginInterface28OnAttachEv
        virtual void OnDetach(); // _ZN6RakNet16PluginInterface28OnDetachEv
        virtual void Update(); // _ZN6RakNet16PluginInterface26UpdateEv
        virtual void OnReceive(RakNet::Packet *); // _ZN6RakNet16PluginInterface29OnReceiveEPNS_6PacketE
        virtual void OnRakPeerStartup(); // _ZN6RakNet16PluginInterface216OnRakPeerStartupEv
        virtual void OnRakPeerShutdown(); // _ZN6RakNet16PluginInterface217OnRakPeerShutdownEv
        virtual void OnClosedConnection__incomplete0(RakNet::SystemAddress const&, RakNet::RakNetGUID, long); //TODO: incomplete function definition // _ZN6RakNet16PluginInterface218OnClosedConnectionERKNS_13SystemAddressENS_10RakNetGUIDENS_24PI2_LostConnectionReasonE
        virtual void OnNewConnection(RakNet::SystemAddress const&, RakNet::RakNetGUID, bool); // _ZN6RakNet16PluginInterface215OnNewConnectionERKNS_13SystemAddressENS_10RakNetGUIDEb
        virtual void OnFailedConnectionAttempt__incomplete0(RakNet::Packet *, long); //TODO: incomplete function definition // _ZN6RakNet16PluginInterface225OnFailedConnectionAttemptEPNS_6PacketENS_33PI2_FailedConnectionAttemptReasonE
        virtual bool UsesReliabilityLayer()const; // _ZNK6RakNet16PluginInterface220UsesReliabilityLayerEv
        virtual void OnDirectSocketSend(char const*, unsigned int, RakNet::SystemAddress); // _ZN6RakNet16PluginInterface218OnDirectSocketSendEPKcjNS_13SystemAddressE
        virtual void OnDirectSocketReceive(char const*, unsigned int, RakNet::SystemAddress); // _ZN6RakNet16PluginInterface221OnDirectSocketReceiveEPKcjNS_13SystemAddressE
        virtual void OnReliabilityLayerNotification(char const*, unsigned int, RakNet::SystemAddress, bool); // _ZN6RakNet16PluginInterface230OnReliabilityLayerNotificationEPKcjNS_13SystemAddressEb
        virtual void OnInternalPacket(RakNet::InternalPacket *, unsigned int, RakNet::SystemAddress, unsigned int, int); // _ZN6RakNet16PluginInterface216OnInternalPacketEPNS_14InternalPacketEjNS_13SystemAddressEji
        virtual void OnAck(unsigned int, RakNet::SystemAddress, unsigned int); // _ZN6RakNet16PluginInterface25OnAckEjNS_13SystemAddressEj
        virtual void OnPushBackPacket(char const*, unsigned int, RakNet::SystemAddress); // _ZN6RakNet16PluginInterface216OnPushBackPacketEPKcjNS_13SystemAddressE
        PluginInterface2(); // _ZN6RakNet16PluginInterface2C2Ev
//        void SendUnified(RakNet::BitStream const*, long, long, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition // _ZN6RakNet16PluginInterface211SendUnifiedEPKNS_9BitStreamE14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEb
        void GetMyGUIDUnified()const; // _ZNK6RakNet16PluginInterface216GetMyGUIDUnifiedEv
//        void SendUnified(char const*, int, long, long, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition // _ZN6RakNet16PluginInterface211SendUnifiedEPKci14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEb
        void AllocatePacketUnified(unsigned int); // _ZN6RakNet16PluginInterface221AllocatePacketUnifiedEj
        void PushBackPacketUnified(RakNet::Packet *, bool); // _ZN6RakNet16PluginInterface221PushBackPacketUnifiedEPNS_6PacketEb
        void DeallocPacketUnified(RakNet::Packet *); // _ZN6RakNet16PluginInterface220DeallocPacketUnifiedEPNS_6PacketE
//        void SendListUnified(char const**, int const*, int, long, long, char, RakNet::AddressOrGUID, bool); //TODO: incomplete function definition // _ZN6RakNet16PluginInterface215SendListUnifiedEPPKcPKii14PacketPriority17PacketReliabilitycNS_13AddressOrGUIDEb
        void SetRakPeerInterface(RakNet::RakPeerInterface *); // _ZN6RakNet16PluginInterface219SetRakPeerInterfaceEPNS_16RakPeerInterfaceE
        void SetTCPInterface(RakNet::TCPInterface *); // _ZN6RakNet16PluginInterface215SetTCPInterfaceEPNS_12TCPInterfaceE
    };
}

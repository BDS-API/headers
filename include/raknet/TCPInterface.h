#pragma once

#include "SystemAddress.h"


namespace RakNet {

    class TCPInterface {

    public:
        class ThisPtrPlusSysAddr;

        ~TCPInterface(); // _ZN6RakNet12TCPInterfaceD2Ev
        virtual void Send(char const*, unsigned int, RakNet::SystemAddress const&, bool); // _ZN6RakNet12TCPInterface4SendEPKcjRKNS_13SystemAddressEb
        virtual void SendList(char const**, unsigned int const*, int, RakNet::SystemAddress const&, bool); // _ZN6RakNet12TCPInterface8SendListEPPKcPKjiRKNS_13SystemAddressEb
        virtual void ReceiveHasPackets(); // _ZN6RakNet12TCPInterface17ReceiveHasPacketsEv
        virtual void Receive(); // _ZN6RakNet12TCPInterface7ReceiveEv
        virtual void PushBackPacket(RakNet::Packet *, bool); // _ZN6RakNet12TCPInterface14PushBackPacketEPNS_6PacketEb
        void GetInstance(); // _ZN6RakNet12TCPInterface11GetInstanceEv
        void DestroyInstance(RakNet::TCPInterface *); // _ZN6RakNet12TCPInterface15DestroyInstanceEPS0_
        TCPInterface(); // _ZN6RakNet12TCPInterfaceC2Ev
        void Stop(); // _ZN6RakNet12TCPInterface4StopEv
        void CreateListenSocket(unsigned short, unsigned short, unsigned short, char const*); // _ZN6RakNet12TCPInterface18CreateListenSocketEtttPKc
        void _removeFromBlockingSocketList(int const&); // _ZN6RakNet12TCPInterface29_removeFromBlockingSocketListERKi
        void DestroyListenSocket(); // _ZN6RakNet12TCPInterface19DestroyListenSocketEv
        void RecreateListenSocket(); // _ZN6RakNet12TCPInterface20RecreateListenSocketEv
        void Start(unsigned short, unsigned short, unsigned short, int, unsigned short, char const*); // _ZN6RakNet12TCPInterface5StartEtttitPKc
        void DeallocatePacket(RakNet::Packet *); // _ZN6RakNet12TCPInterface16DeallocatePacketEPNS_6PacketE
        void Connect(char const*, unsigned short, bool, unsigned short, char const*); // _ZN6RakNet12TCPInterface7ConnectEPKctbtS2_
        void SocketConnect(char const*, unsigned short, unsigned short, char const*); // _ZN6RakNet12TCPInterface13SocketConnectEPKcttS2_
        void ReceiveInt(); // _ZN6RakNet12TCPInterface10ReceiveIntEv
        void _appendToBlockingSocketList(int const&); // _ZN6RakNet12TCPInterface27_appendToBlockingSocketListERKi
        void AttachPlugin(RakNet::PluginInterface2 *); // _ZN6RakNet12TCPInterface12AttachPluginEPNS_16PluginInterface2E
        void DetachPlugin(RakNet::PluginInterface2 *); // _ZN6RakNet12TCPInterface12DetachPluginEPNS_16PluginInterface2E
        void CloseConnection(RakNet::SystemAddress); // _ZN6RakNet12TCPInterface15CloseConnectionENS_13SystemAddressE
        void AllocatePacket(unsigned int); // _ZN6RakNet12TCPInterface14AllocatePacketEj
        bool WasStarted()const; // _ZNK6RakNet12TCPInterface10WasStartedEv
        bool HasCompletedConnectionAttempt(); // _ZN6RakNet12TCPInterface29HasCompletedConnectionAttemptEv
        bool HasFailedConnectionAttempt(); // _ZN6RakNet12TCPInterface26HasFailedConnectionAttemptEv
        bool HasNewIncomingConnection(); // _ZN6RakNet12TCPInterface24HasNewIncomingConnectionEv
        bool HasLostConnection(); // _ZN6RakNet12TCPInterface17HasLostConnectionEv
        void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const; // _ZNK6RakNet12TCPInterface17GetConnectionListEPNS_13SystemAddressEPt
        void GetConnectionCount()const; // _ZNK6RakNet12TCPInterface18GetConnectionCountEv
        void GetOutgoingDataBufferSize(RakNet::SystemAddress)const; // _ZNK6RakNet12TCPInterface25GetOutgoingDataBufferSizeENS_13SystemAddressE
        class ThisPtrPlusSysAddr {

        public:
            ThisPtrPlusSysAddr(); // _ZN6RakNet12TCPInterface18ThisPtrPlusSysAddrC2Ev
        };
    };
}

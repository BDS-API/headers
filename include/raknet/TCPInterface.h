#pragma once

#include "PluginInterface2.h"
#include "SystemAddress.h"
#include "Packet.h"


namespace RakNet {

    class TCPInterface {

    public:
        class ThisPtrPlusSysAddr;

        virtual void Receive();
        virtual void SendList(char const**, unsigned int const*, int, RakNet::SystemAddress const&, bool);
        virtual void Send(char const*, unsigned int, RakNet::SystemAddress const&, bool);
        ~TCPInterface();
        virtual void PushBackPacket(RakNet::Packet *, bool);
        virtual void ReceiveHasPackets();
        bool HasNewIncomingConnection();
        void GetOutgoingDataBufferSize(RakNet::SystemAddress)const;
        void CloseConnection(RakNet::SystemAddress);
        bool HasFailedConnectionAttempt();
        void GetInstance();
        void DeallocatePacket(RakNet::Packet *);
        void GetConnectionCount()const;
        void Stop();
        void Start(unsigned short, unsigned short, unsigned short, int, unsigned short, char const*);
        void DestroyInstance(RakNet::TCPInterface *);
        void SocketConnect(char const*, unsigned short, unsigned short, char const*);
        void AttachPlugin(RakNet::PluginInterface2 *);
        void ReceiveInt();
        void DestroyListenSocket();
        void RecreateListenSocket();
        bool WasStarted()const;
        void Connect(char const*, unsigned short, bool, unsigned short, char const*);
        void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
        bool HasLostConnection();
        void DetachPlugin(RakNet::PluginInterface2 *);
        void AllocatePacket(unsigned int);
        TCPInterface();
        void _appendToBlockingSocketList(int const&);
        void _removeFromBlockingSocketList(int const&);
        void CreateListenSocket(unsigned short, unsigned short, unsigned short, char const*);
        bool HasCompletedConnectionAttempt();
        class ThisPtrPlusSysAddr {

        public:
            ThisPtrPlusSysAddr();
        };
    };
}

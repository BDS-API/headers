#pragma once

#include "SystemAddress.h"


namespace RakNet {

    class TCPInterface {

    public:
        class ThisPtrPlusSysAddr;

        virtual void SendList(char const**, unsigned int const*, int, RakNet::SystemAddress const&, bool);
        virtual void Send(char const*, unsigned int, RakNet::SystemAddress const&, bool);
        virtual void Receive();
        virtual void PushBackPacket(RakNet::Packet *, bool);
        ~TCPInterface();
        virtual void ReceiveHasPackets();
        bool HasCompletedConnectionAttempt();
        bool WasStarted()const;
        void Connect(char const*, unsigned short, bool, unsigned short, char const*);
        void DetachPlugin(RakNet::PluginInterface2 *);
        void DestroyInstance(RakNet::TCPInterface *);
        void Stop();
        void AttachPlugin(RakNet::PluginInterface2 *);
        void SocketConnect(char const*, unsigned short, unsigned short, char const*);
        void GetConnectionCount()const;
        void DeallocatePacket(RakNet::Packet *);
        void RecreateListenSocket();
        void ReceiveInt();
        void CloseConnection(RakNet::SystemAddress);
        bool HasNewIncomingConnection();
        bool HasLostConnection();
        void GetInstance();
        void _removeFromBlockingSocketList(int const&);
        void CreateListenSocket(unsigned short, unsigned short, unsigned short, char const*);
        void AllocatePacket(unsigned int);
        void GetOutgoingDataBufferSize(RakNet::SystemAddress)const;
        void DestroyListenSocket();
        void _appendToBlockingSocketList(int const&);
        bool HasFailedConnectionAttempt();
        void Start(unsigned short, unsigned short, unsigned short, int, unsigned short, char const*);
        void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
        TCPInterface();
        class ThisPtrPlusSysAddr {

        public:
            ThisPtrPlusSysAddr();
        };
    };
}

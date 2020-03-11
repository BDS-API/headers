#pragma once

#include "./TCPInterface.h"
#include "./SystemAddress.h"
#include "./PluginInterface2.h"
#include "./Packet.h"


namespace RakNet {

class TCPInterface {

public:
    virtual ~TCPInterface();
    virtual void Send(char const*, unsigned int, RakNet::SystemAddress const&, bool);
    virtual void SendList(char const**, unsigned int const*, int, RakNet::SystemAddress const&, bool);
    virtual void ReceiveHasPackets();
    virtual void Receive();
    virtual void PushBackPacket(RakNet::Packet *, bool);

    void GetInstance();
    void DestroyInstance(RakNet::TCPInterface *);
    TCPInterface();
    void Stop();
    void CreateListenSocket(unsigned short, unsigned short, unsigned short, char const*);
    void _removeFromBlockingSocketList(int const&);
    void DestroyListenSocket();
    void RecreateListenSocket();
    void Start(unsigned short, unsigned short, unsigned short, int, unsigned short, char const*);
    void DeallocatePacket(RakNet::Packet *);
    void Connect(char const*, unsigned short, bool, unsigned short, char const*);
    void SocketConnect(char const*, unsigned short, unsigned short, char const*);
    void ReceiveInt();
    void _appendToBlockingSocketList(int const&);
    void AttachPlugin(RakNet::PluginInterface2 *);
    void DetachPlugin(RakNet::PluginInterface2 *);
    void CloseConnection(RakNet::SystemAddress);
    void AllocatePacket(unsigned int);
    bool WasStarted()const;
    bool HasCompletedConnectionAttempt();
    bool HasFailedConnectionAttempt();
    bool HasNewIncomingConnection();
    bool HasLostConnection();
    void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
    void GetConnectionCount()const;
    void GetOutgoingDataBufferSize(RakNet::SystemAddress)const;
};

}
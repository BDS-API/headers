#pragma once

class RakNet::TCPInterface {

public:
    virtual ~TCPInterface();
    virtual void Send(char const*, unsigned int, RakNet::SystemAddress const&, bool);
    virtual void SendList(char const**, unsigned int const*, int, RakNet::SystemAddress const&, bool);
    virtual void ReceiveHasPackets(void);
    virtual void Receive(void);
    virtual void PushBackPacket(RakNet::Packet *, bool);

    void GetInstance(void);
    void DestroyInstance(RakNet::TCPInterface*);
    void TCPInterface(void);
    void Stop(void);
    void CreateListenSocket(unsigned short, unsigned short, unsigned short, char const*);
    void _removeFromBlockingSocketList(int const&);
    void DestroyListenSocket(void);
    void RecreateListenSocket(void);
    void Start(unsigned short, unsigned short, unsigned short, int, unsigned short, char const*);
    void DeallocatePacket(RakNet::Packet *);
    void Connect(char const*, unsigned short, bool, unsigned short, char const*);
    void SocketConnect(char const*, unsigned short, unsigned short, char const*);
    void ReceiveInt(void);
    void _appendToBlockingSocketList(int const&);
    void AttachPlugin(RakNet::PluginInterface2 *);
    void DetachPlugin(RakNet::PluginInterface2 *);
    void CloseConnection(RakNet::SystemAddress);
    void AllocatePacket(unsigned int);
    void WasStarted(void)const;
    void HasCompletedConnectionAttempt(void);
    void HasFailedConnectionAttempt(void);
    void HasNewIncomingConnection(void);
    void HasLostConnection(void);
    void GetConnectionList(RakNet::SystemAddress *, unsigned short *)const;
    void GetConnectionCount(void)const;
    void GetOutgoingDataBufferSize(RakNet::SystemAddress)const;
};

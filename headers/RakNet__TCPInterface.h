#pragma once

class RakNet::TCPInterface {

    virtual void ~TCPInterface();
    virtual void ~TCPInterface();
    virtual void Send(char const*, unsigned int, RakNet::SystemAddress const&, bool);
    virtual void SendList(char const**, unsigned int const*, int, RakNet::SystemAddress const&, bool);
    virtual void ReceiveHasPackets(void);
    virtual void Receive(void);
    virtual void PushBackPacket(RakNet::Packet *, bool);
}

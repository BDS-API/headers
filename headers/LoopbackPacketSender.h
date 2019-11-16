#pragma once

class LoopbackPacketSender : PacketSender {

    virtual void Loopback~LoopbackPacketSender();
    virtual void Loopback~LoopbackPacketSender();
    virtual void Loopbacksend(Packet &);
    virtual void LoopbacksendToServer(Packet &);
    virtual void LoopbacksendToClient(NetworkIdentifier const&, Packet const&, unsigned char);
    virtual void LoopbacksendToClients(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId>> const&, Packet const&);
    virtual void LoopbacksendBroadcast(Packet const&);
    virtual void LoopbacksendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&);
    virtual void Loopbackflush(NetworkIdentifier const&, std::function<void ()(void)> &&);
}

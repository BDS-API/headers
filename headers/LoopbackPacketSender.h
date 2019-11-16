#pragma once

class LoopbackPacketSender : PacketSender {

    virtual void LoopbackPacketSender::~LoopbackPacketSender();
    virtual void LoopbackPacketSender::~LoopbackPacketSender();
    virtual void send(Packet &);
    virtual void sendToServer(Packet &);
    virtual void sendToClient(NetworkIdentifier const&, Packet const&, unsigned char);
    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId>> const&, Packet const&);
    virtual void sendBroadcast(Packet const&);
    virtual void sendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&);
    virtual void flush(NetworkIdentifier const&, std::function<void ()(void)> &&);
}

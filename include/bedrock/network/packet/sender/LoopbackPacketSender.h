#pragma once

#include "../../../../unmapped/NetworkIdentifier"
#include "../../../../unmapped/NetworkHandler"
#include "../Packet"
#include "../../NetEventCallback"
#include "../../../actor/Player"


class LoopbackPacketSender : PacketSender {

public:
    virtual LoopbackPacketSender::~LoopbackPacketSender()
    virtual void send(Packet &);
    virtual void sendToServer(Packet &);
    virtual void sendToClient(NetworkIdentifier const&, Packet const&, unsigned char);
    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId>> const&, Packet const&);
    virtual void sendBroadcast(Packet const&);
    virtual void sendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&);
    virtual void flush(NetworkIdentifier const&, std::function<void ()(void)> &&);

    LoopbackPacketSender(unsigned char, NetworkHandler &);
    void addLoopbackCallback(NetEventCallback &);
    void removeLoopbackCallback(NetEventCallback &);
    void setUserList(std::vector<std::unique_ptr<Player, std::default_delete<Player>>, std::allocator<std::unique_ptr<Player, std::default_delete<Player>>>> const*);
};

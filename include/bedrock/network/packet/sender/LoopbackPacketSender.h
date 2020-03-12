#pragma once

#include "PacketSender.h"
#include <vector>
#include <functional>


class LoopbackPacketSender : PacketSender {

public:
    ~LoopbackPacketSender();
    virtual void flush(NetworkIdentifier const&, std::function<void (void)> &&);
    virtual void send(Packet &);
    virtual void sendBroadcast(Packet const&);
    virtual void sendToServer(Packet &);
    virtual void sendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&);
    virtual void sendToClients(std::vector<NetworkIdentifierWithSubId> const&, Packet const&);
    virtual void sendToClient(NetworkIdentifier const&, Packet const&, unsigned char);
    LoopbackPacketSender(unsigned char, NetworkHandler &);
    void removeLoopbackCallback(NetEventCallback &);
    void addLoopbackCallback(NetEventCallback &);
    void setUserList(std::vector<std::unique_ptr<Player>> const*);
};

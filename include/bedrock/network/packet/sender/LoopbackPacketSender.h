#pragma once

#include <functional>
#include "../../../../unmapped/NetworkHandler.h"
#include "./PacketSender.h"
#include "../../../actor/Player.h"
#include <memory>
#include "../Packet.h"
#include "../../NetEventCallback.h"
#include <vector>
#include "../../../../unmapped/NetworkIdentifier.h"


class LoopbackPacketSender : PacketSender {

public:
    virtual ~LoopbackPacketSender();
    virtual void send(Packet &);
    virtual void sendToServer(Packet &);
    virtual void sendToClient(NetworkIdentifier const&, Packet const&, unsigned char);
//  virtual void sendToClients(std::vector<NetworkIdentifierWithSubId, std::allocator<NetworkIdentifierWithSubId>> const&, Packet const&); //TODO: incomplete function definition
    virtual void sendBroadcast(Packet const&);
    virtual void sendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&);
//  virtual void flush(NetworkIdentifier const&, std::function<void (void)> &&); //TODO: incomplete function definition

    LoopbackPacketSender(unsigned char, NetworkHandler &);
    void addLoopbackCallback(NetEventCallback &);
    void removeLoopbackCallback(NetEventCallback &);
    void setUserList(std::vector<std::unique_ptr<Player, std::default_delete<Player>>, std::allocator<std::unique_ptr<Player, std::default_delete<Player>>>> const*);
};

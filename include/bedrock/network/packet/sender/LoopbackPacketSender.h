#pragma once

#include "../../../../unmapped/NetworkIdentifier.h"
#include "../../../../unmapped/NetworkHandler.h"
#include "PacketSender.h"
#include "../../NetEventCallback.h"
#include "../../../actor/Player.h"
#include <functional>
#include <vector>
#include <memory>
#include "../Packet.h"


class LoopbackPacketSender : PacketSender {

public:
    virtual void sendToServer(Packet &);
    ~LoopbackPacketSender();
//  virtual void sendToClients(std::vector<NetworkIdentifierWithSubId> const&, Packet const&); //TODO: incomplete function definition
    virtual void sendToClient(NetworkIdentifier const&, Packet const&, unsigned char);
    virtual void sendBroadcast(NetworkIdentifier const&, unsigned char, Packet const&);
    virtual void send(Packet &);
    virtual void sendBroadcast(Packet const&);
    virtual void flush(NetworkIdentifier const&, std::function<void (void)> &&);
    void addLoopbackCallback(NetEventCallback &);
    void setUserList(std::vector<std::unique_ptr<Player>> const*);
    void removeLoopbackCallback(NetEventCallback &);
    LoopbackPacketSender(unsigned char, NetworkHandler &);
};

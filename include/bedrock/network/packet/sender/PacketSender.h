#pragma once

#include "../../../../unmapped/NetworkIdentifier.h"
#include "../Packet.h"


class PacketSender {

public:
    virtual ~PacketSender();

    void sendToPrimaryClient(NetworkIdentifier const&, Packet const&);
    PacketSender(unsigned char);
};

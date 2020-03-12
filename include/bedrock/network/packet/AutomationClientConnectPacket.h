#pragma once

#include <string>
#include "../../../unmapped/WebSocketPacketData.h"
#include "Packet.h"


class AutomationClientConnectPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~AutomationClientConnectPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    AutomationClientConnectPacket();
    AutomationClientConnectPacket(WebSocketPacketData);
};

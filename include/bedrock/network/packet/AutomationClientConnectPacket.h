#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../../unmapped/WebSocketPacketData.h"


class AutomationClientConnectPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~AutomationClientConnectPacket();
    AutomationClientConnectPacket(WebSocketPacketData);
    AutomationClientConnectPacket();
};

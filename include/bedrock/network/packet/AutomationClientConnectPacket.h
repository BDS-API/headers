#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/WebSocketPacketData"
#include "../../io/ReadOnlyBinaryStream"


class AutomationClientConnectPacket : Packet {

public:
    AutomationClientConnectPacket::~AutomationClientConnectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AutomationClientConnectPacket(void);
    AutomationClientConnectPacket(WebSocketPacketData);
};

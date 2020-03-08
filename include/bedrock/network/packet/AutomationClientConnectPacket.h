#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/WebSocketPacketData"


class AutomationClientConnectPacket : Packet {

public:
    virtual AutomationClientConnectPacket::~AutomationClientConnectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AutomationClientConnectPacket(void);
    AutomationClientConnectPacket(WebSocketPacketData);
};

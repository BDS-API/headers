#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/WebSocketPacketData"
#include "../../io/ReadOnlyBinaryStream"


class AutomationClientConnectPacket : Packet {

public:
    virtual AutomationClientConnectPacket::~AutomationClientConnectPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AutomationClientConnectPacket(void);
    AutomationClientConnectPacket(WebSocketPacketData);
};

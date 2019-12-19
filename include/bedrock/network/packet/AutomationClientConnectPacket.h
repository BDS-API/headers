#pragma once

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

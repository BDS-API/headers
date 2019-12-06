#pragma once

class AutomationClientConnectPacket : Packet {

public:
    virtual ~AutomationClientConnectPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AutomationClientConnectPacket(void);
    void AutomationClientConnectPacket(WebSocketPacketData);
};

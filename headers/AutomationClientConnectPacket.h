#pragma once

class AutomationClientConnectPacket : Packet {

    virtual void AutomationClientConnectPacket::~AutomationClientConnectPacket();
    virtual void AutomationClientConnectPacket::~AutomationClientConnectPacket();
    virtual void getId(void)const;
    virtual void _ZNK29AutomationClientConnectPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

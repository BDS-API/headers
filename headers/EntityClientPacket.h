#pragma once

class EntityClientPacket : Packet {

    virtual ~EntityClientPacket();
    virtual ~EntityClientPacket();
    virtual void __cxa_pure_virtual;
    virtual void __cxa_pure_virtual;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

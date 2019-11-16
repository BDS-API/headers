#pragma once

class CraftingDataPacket : Packet {

    virtual void CraftingDataPacket::~CraftingDataPacket();
    virtual void CraftingDataPacket::~CraftingDataPacket();
    virtual void getId(void)const;
    virtual void _ZNK18CraftingDataPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

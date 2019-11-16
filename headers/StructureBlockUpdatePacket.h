#pragma once

class StructureBlockUpdatePacket : Packet {

    virtual void StructureBlockUpdatePacket::~StructureBlockUpdatePacket();
    virtual void StructureBlockUpdatePacket::~StructureBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void _ZNK26StructureBlockUpdatePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

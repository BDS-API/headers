#pragma once

class StructureBlockUpdatePacket : Packet {

public:
    virtual StructureBlockUpdatePacket::~StructureBlockUpdatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureBlockUpdatePacket(void);
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
};
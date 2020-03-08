#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/BinaryStream"
#include "../../../unmapped/StructureEditorData"
#include "../../io/ReadOnlyBinaryStream"


class StructureBlockUpdatePacket : Packet {

public:
    virtual StructureBlockUpdatePacket::~StructureBlockUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureBlockUpdatePacket(void);
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
};

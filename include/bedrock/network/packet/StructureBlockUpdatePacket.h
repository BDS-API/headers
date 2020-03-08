#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/StructureEditorData"


class StructureBlockUpdatePacket : Packet {

public:
    StructureBlockUpdatePacket::~StructureBlockUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureBlockUpdatePacket(void);
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
};

#pragma once

#include <string>
#include "../../../unmapped/NetworkBlockPosition.h"
#include "Packet.h"


class StructureBlockUpdatePacket : Packet {

public:
    ~StructureBlockUpdatePacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
    StructureBlockUpdatePacket();
};

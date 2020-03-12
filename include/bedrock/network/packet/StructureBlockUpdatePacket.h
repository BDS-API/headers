#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/StructureEditorData.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "Packet.h"


class StructureBlockUpdatePacket : Packet {

public:
    ~StructureBlockUpdatePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
    StructureBlockUpdatePacket();
};

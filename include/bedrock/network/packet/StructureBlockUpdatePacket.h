#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "../../../unmapped/StructureEditorData.h"
#include "./Packet.h"
#include <string>


class StructureBlockUpdatePacket : Packet {

public:
    virtual ~StructureBlockUpdatePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureBlockUpdatePacket();
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool);
};

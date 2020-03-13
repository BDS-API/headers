#pragma once

#include <string>
#include "Packet.h"
#include "../../../unmapped/NetworkBlockPosition.h"


class StructureBlockUpdatePacket : Packet {

public:
    ~StructureBlockUpdatePacket(); // _ZN26StructureBlockUpdatePacketD2Ev
    virtual void getId()const; // _ZNK26StructureBlockUpdatePacket5getIdEv
    virtual std::string getName()const; // _ZNK26StructureBlockUpdatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK26StructureBlockUpdatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN26StructureBlockUpdatePacket4readER20ReadOnlyBinaryStream
    StructureBlockUpdatePacket(); // _ZN26StructureBlockUpdatePacketC2Ev
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool); // _ZN26StructureBlockUpdatePacketC2E20NetworkBlockPositionRK19StructureEditorDatab
};

#pragma once

#include <string>
#include "../../../unmapped/NetworkBlockPosition.h"
#include "Packet.h"


class StructureBlockUpdatePacket : public Packet {

public:
    virtual ~StructureBlockUpdatePacket(); // _ZN26StructureBlockUpdatePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK26StructureBlockUpdatePacket5getIdEv
    virtual std::string getName()const; // _ZNK26StructureBlockUpdatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK26StructureBlockUpdatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN26StructureBlockUpdatePacket4readER20ReadOnlyBinaryStream
    StructureBlockUpdatePacket(); // _ZN26StructureBlockUpdatePacketC2Ev
    StructureBlockUpdatePacket(NetworkBlockPosition, StructureEditorData const&, bool); // _ZN26StructureBlockUpdatePacketC2E20NetworkBlockPositionRK19StructureEditorDatab
};

#pragma once

#include <string>
#include "Packet.h"


class CompletedUsingItemPacket : Packet {

public:
    ~CompletedUsingItemPacket(); // _ZN24CompletedUsingItemPacketD2Ev
    virtual void getId()const; // _ZNK24CompletedUsingItemPacket5getIdEv
    virtual std::string getName()const; // _ZNK24CompletedUsingItemPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24CompletedUsingItemPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24CompletedUsingItemPacket4readER20ReadOnlyBinaryStream
    CompletedUsingItemPacket(); // _ZN24CompletedUsingItemPacketC2Ev
    CompletedUsingItemPacket(short, int); // _ZN24CompletedUsingItemPacketC2Esi
};

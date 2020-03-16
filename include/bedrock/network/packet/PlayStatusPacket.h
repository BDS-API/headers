#pragma once

#include <string>
#include "Packet.h"


class PlayStatusPacket : public Packet {

public:
    virtual ~PlayStatusPacket(); // _ZN16PlayStatusPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK16PlayStatusPacket5getIdEv
    virtual std::string getName()const; // _ZNK16PlayStatusPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16PlayStatusPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16PlayStatusPacket4readER20ReadOnlyBinaryStream
    PlayStatusPacket(); // _ZN16PlayStatusPacketC2Ev
//    PlayStatusPacket(long); //TODO: incomplete function definition // _ZN16PlayStatusPacketC2E10PlayStatus
};

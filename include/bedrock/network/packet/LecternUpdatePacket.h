#pragma once

#include <string>
#include "Packet.h"


class LecternUpdatePacket : public Packet {

public:
    virtual ~LecternUpdatePacket(); // _ZN19LecternUpdatePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK19LecternUpdatePacket5getIdEv
    virtual std::string getName()const; // _ZNK19LecternUpdatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19LecternUpdatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19LecternUpdatePacket4readER20ReadOnlyBinaryStream
    LecternUpdatePacket(); // _ZN19LecternUpdatePacketC2Ev
};

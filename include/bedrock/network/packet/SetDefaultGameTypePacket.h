#pragma once

#include <string>
#include "Packet.h"


class SetDefaultGameTypePacket : Packet {

public:
    ~SetDefaultGameTypePacket(); // _ZN24SetDefaultGameTypePacketD2Ev
    virtual void getId()const; // _ZNK24SetDefaultGameTypePacket5getIdEv
    virtual std::string getName()const; // _ZNK24SetDefaultGameTypePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24SetDefaultGameTypePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24SetDefaultGameTypePacket4readER20ReadOnlyBinaryStream
    SetDefaultGameTypePacket(); // _ZN24SetDefaultGameTypePacketC2Ev
//  SetDefaultGameTypePacket(GameType); //TODO: incomplete function definition // _ZN24SetDefaultGameTypePacketC2E8GameType
};

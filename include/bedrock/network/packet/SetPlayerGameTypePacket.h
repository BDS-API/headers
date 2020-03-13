#pragma once

#include <string>
#include "Packet.h"


class SetPlayerGameTypePacket : Packet {

public:
    ~SetPlayerGameTypePacket(); // _ZN23SetPlayerGameTypePacketD2Ev
    virtual void getId()const; // _ZNK23SetPlayerGameTypePacket5getIdEv
    virtual std::string getName()const; // _ZNK23SetPlayerGameTypePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23SetPlayerGameTypePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23SetPlayerGameTypePacket4readER20ReadOnlyBinaryStream
    SetPlayerGameTypePacket(); // _ZN23SetPlayerGameTypePacketC2Ev
//  SetPlayerGameTypePacket(GameType); //TODO: incomplete function definition // _ZN23SetPlayerGameTypePacketC2E8GameType
};

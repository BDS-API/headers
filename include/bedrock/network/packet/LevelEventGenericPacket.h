#pragma once

#include <string>
#include "Packet.h"


class LevelEventGenericPacket : Packet {

public:
    ~LevelEventGenericPacket(); // _ZN23LevelEventGenericPacketD2Ev
    virtual void getId()const; // _ZNK23LevelEventGenericPacket5getIdEv
    virtual std::string getName()const; // _ZNK23LevelEventGenericPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23LevelEventGenericPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23LevelEventGenericPacket4readER20ReadOnlyBinaryStream
//  LevelEventGenericPacket(LevelEvent, CompoundTag const&); //TODO: incomplete function definition // _ZN23LevelEventGenericPacketC2E10LevelEventRK11CompoundTag
    LevelEventGenericPacket(); // _ZN23LevelEventGenericPacketC2Ev
};

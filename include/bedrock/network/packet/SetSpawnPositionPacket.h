#pragma once

#include <string>
#include "Packet.h"


class SetSpawnPositionPacket : public Packet {

public:
    virtual ~SetSpawnPositionPacket(); // _ZN22SetSpawnPositionPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK22SetSpawnPositionPacket5getIdEv
    virtual std::string getName()const; // _ZNK22SetSpawnPositionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22SetSpawnPositionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22SetSpawnPositionPacket4readER20ReadOnlyBinaryStream
    SetSpawnPositionPacket(); // _ZN22SetSpawnPositionPacketC2Ev
//    SetSpawnPositionPacket(BlockPos const&, long, bool); //TODO: incomplete function definition // _ZN22SetSpawnPositionPacketC2ERK8BlockPos17SpawnPositionTypeb
};

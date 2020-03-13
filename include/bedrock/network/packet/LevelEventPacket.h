#pragma once

#include <string>
#include "Packet.h"


class LevelEventPacket : Packet {

public:
    ~LevelEventPacket(); // _ZN16LevelEventPacketD2Ev
    virtual void getId()const; // _ZNK16LevelEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK16LevelEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK16LevelEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN16LevelEventPacket4readER20ReadOnlyBinaryStream
//  LevelEventPacket(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition // _ZN16LevelEventPacketC2E10LevelEventRK4Vec3i
//  LevelEventPacket(LevelEvent, float, float, float, int); //TODO: incomplete function definition // _ZN16LevelEventPacketC2E10LevelEventfffi
    LevelEventPacket(); // _ZN16LevelEventPacketC2Ev
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "Packet.h"


class LevelEventPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~LevelEventPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
//  LevelEventPacket(LevelEvent, float, float, float, int); //TODO: incomplete function definition
//  LevelEventPacket(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    LevelEventPacket();
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "./Packet.h"
#include <string>


class LevelEventPacket : Packet {

public:
    virtual ~LevelEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

//  LevelEventPacket(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
//  LevelEventPacket(LevelEvent, float, float, float, int); //TODO: incomplete function definition
    LevelEventPacket();
};

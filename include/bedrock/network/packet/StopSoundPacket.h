#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class StopSoundPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~StopSoundPacket();
    virtual std::string getName()const;
    StopSoundPacket(std::string const&, bool);
    StopSoundPacket();
};

#pragma once

#include <string>
#include "Packet.h"


class StopSoundPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~StopSoundPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    StopSoundPacket(std::string const&, bool);
    StopSoundPacket();
};

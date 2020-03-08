#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class StopSoundPacket : Packet {

public:
    StopSoundPacket::~StopSoundPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StopSoundPacket(void);
    StopSoundPacket(std::string const&, bool);
};

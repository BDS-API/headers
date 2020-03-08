#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class StopSoundPacket : Packet {

public:
    virtual StopSoundPacket::~StopSoundPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StopSoundPacket(void);
    StopSoundPacket(std::string const&, bool);
};

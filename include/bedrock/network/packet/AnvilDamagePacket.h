#pragma once

#include <string>
#include "Packet.h"


class AnvilDamagePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~AnvilDamagePacket();
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    AnvilDamagePacket(int, NetworkBlockPosition const&);
    AnvilDamagePacket();
};

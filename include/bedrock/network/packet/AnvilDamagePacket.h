#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "Packet.h"


class AnvilDamagePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~AnvilDamagePacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
    AnvilDamagePacket(int, NetworkBlockPosition const&);
    AnvilDamagePacket();
};

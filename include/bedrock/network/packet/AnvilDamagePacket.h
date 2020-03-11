#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "./Packet.h"
#include <string>


class AnvilDamagePacket : Packet {

public:
    virtual ~AnvilDamagePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AnvilDamagePacket();
    AnvilDamagePacket(int, NetworkBlockPosition const&);
};

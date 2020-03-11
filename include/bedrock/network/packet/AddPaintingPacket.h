#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/Painting.h"
#include <string>


class AddPaintingPacket : Packet {

public:
    virtual ~AddPaintingPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddPaintingPacket();
    AddPaintingPacket(Painting const&);
};

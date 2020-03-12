#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class HurtArmorPacket : Packet {

public:
    ~HurtArmorPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    HurtArmorPacket(int);
    HurtArmorPacket();
};

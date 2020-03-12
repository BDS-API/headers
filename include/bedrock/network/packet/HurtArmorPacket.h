#pragma once

#include <string>
#include "Packet.h"


class HurtArmorPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~HurtArmorPacket();
    HurtArmorPacket(int);
    HurtArmorPacket();
};

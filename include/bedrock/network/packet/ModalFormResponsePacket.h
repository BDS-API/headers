#pragma once

#include <string>
#include "Packet.h"


class ModalFormResponsePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~ModalFormResponsePacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ModalFormResponsePacket();
    ModalFormResponsePacket(unsigned int, std::string const&);
};

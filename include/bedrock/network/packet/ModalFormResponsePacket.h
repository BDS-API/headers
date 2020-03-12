#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ModalFormResponsePacket : Packet {

public:
    virtual void getId()const;
    ~ModalFormResponsePacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ModalFormResponsePacket(unsigned int, std::string const&);
    ModalFormResponsePacket();
};

#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ModalFormResponsePacket : Packet {

public:
    virtual ~ModalFormResponsePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormResponsePacket();
    ModalFormResponsePacket(unsigned int, std::string const&);
};

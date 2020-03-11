#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class ModalFormRequestPacket : Packet {

public:
    virtual ~ModalFormRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormRequestPacket();
    ModalFormRequestPacket(unsigned int, std::string const&);
};

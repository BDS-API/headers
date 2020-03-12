#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ModalFormRequestPacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ModalFormRequestPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ModalFormRequestPacket(unsigned int, std::string const&);
    ModalFormRequestPacket();
};

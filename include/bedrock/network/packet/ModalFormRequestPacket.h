#pragma once

#include <string>
#include "Packet.h"


class ModalFormRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ModalFormRequestPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ModalFormRequestPacket(unsigned int, std::string const&);
    ModalFormRequestPacket();
};

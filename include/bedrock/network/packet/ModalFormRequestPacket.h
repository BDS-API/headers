#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ModalFormRequestPacket : Packet {

public:
    ModalFormRequestPacket::~ModalFormRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormRequestPacket(void);
    ModalFormRequestPacket(unsigned int, std::string const&);
};

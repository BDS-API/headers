#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ModalFormRequestPacket : Packet {

public:
    virtual ModalFormRequestPacket::~ModalFormRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormRequestPacket(void);
    ModalFormRequestPacket(unsigned int, std::string const&);
};

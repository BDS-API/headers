#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class ModalFormResponsePacket : Packet {

public:
    ModalFormResponsePacket::~ModalFormResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormResponsePacket(void);
    ModalFormResponsePacket(unsigned int, std::string const&);
};

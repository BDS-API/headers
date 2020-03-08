#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ModalFormResponsePacket : Packet {

public:
    virtual ModalFormResponsePacket::~ModalFormResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ModalFormResponsePacket(void);
    ModalFormResponsePacket(unsigned int, std::string const&);
};

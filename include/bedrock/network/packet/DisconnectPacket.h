#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class DisconnectPacket : Packet {

public:
    virtual DisconnectPacket::~DisconnectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    DisconnectPacket(void);
    DisconnectPacket(std::string const&, bool);
};

#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class DisconnectPacket : Packet {

public:
    DisconnectPacket::~DisconnectPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    DisconnectPacket(void);
    DisconnectPacket(std::string const&, bool);
};

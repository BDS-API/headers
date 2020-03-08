#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class ShowProfilePacket : Packet {

public:
    virtual ShowProfilePacket::~ShowProfilePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ShowProfilePacket(void);
    ShowProfilePacket(std::string const&);
};

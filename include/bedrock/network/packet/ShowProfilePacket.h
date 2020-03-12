#pragma once

#include <string>
#include "Packet.h"


class ShowProfilePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~ShowProfilePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ShowProfilePacket();
    ShowProfilePacket(std::string const&);
};

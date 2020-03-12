#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class ShowProfilePacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ShowProfilePacket();
    ShowProfilePacket(std::string const&);
    ShowProfilePacket();
};

#pragma once

#include <string>
#include "Packet.h"


class SetTitlePacket : Packet {

public:
    virtual std::string getName()const;
    ~SetTitlePacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
//  SetTitlePacket(SetTitlePacket::TitleType, std::string const&); //TODO: incomplete function definition
    SetTitlePacket();
//  SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&); //TODO: incomplete function definition
//  SetTitlePacket(SetTitlePacket::TitleType); //TODO: incomplete function definition
    SetTitlePacket(int, int, int);
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../text/TextObjectRoot.h"
#include "Packet.h"


class SetTitlePacket : Packet {

public:
    ~SetTitlePacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
//  SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&); //TODO: incomplete function definition
//  SetTitlePacket(SetTitlePacket::TitleType, std::string const&); //TODO: incomplete function definition
//  SetTitlePacket(SetTitlePacket::TitleType); //TODO: incomplete function definition
    SetTitlePacket();
    SetTitlePacket(int, int, int);
};

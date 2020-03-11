#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../text/TextObjectRoot.h"
#include <string>


class SetTitlePacket : Packet {

public:
    virtual ~SetTitlePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetTitlePacket();
//  SetTitlePacket(SetTitlePacket::TitleType); //TODO: incomplete function definition
//  SetTitlePacket(SetTitlePacket::TitleType, std::string const&); //TODO: incomplete function definition
//  SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&); //TODO: incomplete function definition
    SetTitlePacket(int, int, int);
};

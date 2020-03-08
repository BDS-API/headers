#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../text/TextObjectRoot"


class SetTitlePacket : Packet {

public:
    virtual SetTitlePacket::~SetTitlePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetTitlePacket(void);
    SetTitlePacket(SetTitlePacket::TitleType);
    SetTitlePacket(SetTitlePacket::TitleType, std::string const&);
    SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&);
    SetTitlePacket(int, int, int);
};

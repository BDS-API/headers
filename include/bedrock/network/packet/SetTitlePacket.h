#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../text/TextObjectRoot"


class SetTitlePacket : Packet {

public:
    virtual SetTitlePacket::~SetTitlePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetTitlePacket(void);
    SetTitlePacket(SetTitlePacket::TitleType);
    SetTitlePacket(SetTitlePacket::TitleType, std::string const&);
    SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&);
    SetTitlePacket(int, int, int);
};

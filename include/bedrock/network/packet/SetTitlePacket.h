#pragma once

#include <string>
#include "Packet.h"


class SetTitlePacket : Packet {

public:
    ~SetTitlePacket(); // _ZN14SetTitlePacketD2Ev
    virtual void getId()const; // _ZNK14SetTitlePacket5getIdEv
    virtual std::string getName()const; // _ZNK14SetTitlePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14SetTitlePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14SetTitlePacket4readER20ReadOnlyBinaryStream
    SetTitlePacket(); // _ZN14SetTitlePacketC2Ev
//  SetTitlePacket(SetTitlePacket::TitleType); //TODO: incomplete function definition // _ZN14SetTitlePacketC2ENS_9TitleTypeE
//  SetTitlePacket(SetTitlePacket::TitleType, std::string const&); //TODO: incomplete function definition // _ZN14SetTitlePacketC2ENS_9TitleTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  SetTitlePacket(SetTitlePacket::TitleType, TextObjectRoot const&); //TODO: incomplete function definition // _ZN14SetTitlePacketC2ENS_9TitleTypeERK14TextObjectRoot
    SetTitlePacket(int, int, int); // _ZN14SetTitlePacketC2Eiii
};

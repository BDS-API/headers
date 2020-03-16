#pragma once

#include <string>
#include "Packet.h"


class SetTitlePacket : public Packet {

public:
    virtual ~SetTitlePacket(); // _ZN14SetTitlePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK14SetTitlePacket5getIdEv
    virtual std::string getName()const; // _ZNK14SetTitlePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14SetTitlePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14SetTitlePacket4readER20ReadOnlyBinaryStream
    SetTitlePacket(); // _ZN14SetTitlePacketC2Ev
//    SetTitlePacket(long); //TODO: incomplete function definition // _ZN14SetTitlePacketC2ENS_9TitleTypeE
//    SetTitlePacket(long, std::string const&); //TODO: incomplete function definition // _ZN14SetTitlePacketC2ENS_9TitleTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//    SetTitlePacket(long, TextObjectRoot const&); //TODO: incomplete function definition // _ZN14SetTitlePacketC2ENS_9TitleTypeERK14TextObjectRoot
    SetTitlePacket(int, int, int); // _ZN14SetTitlePacketC2Eiii
};

#pragma once

#include <string>
#include "Packet.h"


class ShowProfilePacket : public Packet {

public:
    virtual ~ShowProfilePacket(); // _ZN17ShowProfilePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK17ShowProfilePacket5getIdEv
    virtual std::string getName()const; // _ZNK17ShowProfilePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17ShowProfilePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17ShowProfilePacket4readER20ReadOnlyBinaryStream
    ShowProfilePacket(); // _ZN17ShowProfilePacketC2Ev
    ShowProfilePacket(std::string const&); // _ZN17ShowProfilePacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};

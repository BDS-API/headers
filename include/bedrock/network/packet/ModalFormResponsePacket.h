#pragma once

#include <string>
#include "Packet.h"


class ModalFormResponsePacket : Packet {

public:
    ~ModalFormResponsePacket(); // _ZN23ModalFormResponsePacketD2Ev
    virtual void getId()const; // _ZNK23ModalFormResponsePacket5getIdEv
    virtual std::string getName()const; // _ZNK23ModalFormResponsePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23ModalFormResponsePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23ModalFormResponsePacket4readER20ReadOnlyBinaryStream
    ModalFormResponsePacket(); // _ZN23ModalFormResponsePacketC2Ev
    ModalFormResponsePacket(unsigned int, std::string const&); // _ZN23ModalFormResponsePacketC2EjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};

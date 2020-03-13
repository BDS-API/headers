#pragma once

#include <string>
#include "Packet.h"


class ModalFormRequestPacket : Packet {

public:
    ~ModalFormRequestPacket(); // _ZN22ModalFormRequestPacketD2Ev
    virtual void getId()const; // _ZNK22ModalFormRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK22ModalFormRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK22ModalFormRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN22ModalFormRequestPacket4readER20ReadOnlyBinaryStream
    ModalFormRequestPacket(); // _ZN22ModalFormRequestPacketC2Ev
    ModalFormRequestPacket(unsigned int, std::string const&); // _ZN22ModalFormRequestPacketC2EjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};

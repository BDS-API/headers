#pragma once

#include <string>
#include "Packet.h"


class TransferPacket : Packet {

public:
    ~TransferPacket(); // _ZN14TransferPacketD2Ev
    virtual void getId()const; // _ZNK14TransferPacket5getIdEv
    virtual std::string getName()const; // _ZNK14TransferPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14TransferPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14TransferPacket4readER20ReadOnlyBinaryStream
    TransferPacket(); // _ZN14TransferPacketC2Ev
    TransferPacket(std::string const&, int); // _ZN14TransferPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

#pragma once

#include <string>
#include "Packet.h"


class GuiDataPickItemPacket : Packet {

public:
    ~GuiDataPickItemPacket(); // _ZN21GuiDataPickItemPacketD2Ev
    virtual void getId()const; // _ZNK21GuiDataPickItemPacket5getIdEv
    virtual std::string getName()const; // _ZNK21GuiDataPickItemPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21GuiDataPickItemPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21GuiDataPickItemPacket4readER20ReadOnlyBinaryStream
    GuiDataPickItemPacket(); // _ZN21GuiDataPickItemPacketC2Ev
    GuiDataPickItemPacket(std::string const&, std::string const&, int const&); // _ZN21GuiDataPickItemPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RKi
};

#pragma once

#include <string>
#include "Packet.h"


class StructureTemplateDataRequestPacket : public Packet {

public:
    virtual ~StructureTemplateDataRequestPacket(); // _ZN34StructureTemplateDataRequestPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK34StructureTemplateDataRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK34StructureTemplateDataRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK34StructureTemplateDataRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN34StructureTemplateDataRequestPacket4readER20ReadOnlyBinaryStream
    StructureTemplateDataRequestPacket(); // _ZN34StructureTemplateDataRequestPacketC2Ev
//    StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, long); //TODO: incomplete function definition // _ZN34StructureTemplateDataRequestPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK20NetworkBlockPositionRK17StructureSettings33StructureTemplateRequestOperation
};

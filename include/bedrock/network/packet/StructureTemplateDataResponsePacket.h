#pragma once

#include <string>
#include <memory>
#include "Packet.h"


class StructureTemplateDataResponsePacket : Packet {

public:
    ~StructureTemplateDataResponsePacket(); // _ZN35StructureTemplateDataResponsePacketD2Ev
    virtual void getId()const; // _ZNK35StructureTemplateDataResponsePacket5getIdEv
    virtual std::string getName()const; // _ZNK35StructureTemplateDataResponsePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK35StructureTemplateDataResponsePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN35StructureTemplateDataResponsePacket4readER20ReadOnlyBinaryStream
    StructureTemplateDataResponsePacket(); // _ZN35StructureTemplateDataResponsePacketC2Ev
//  StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag>, StructureTemplateResponseType); //TODO: incomplete function definition // _ZN35StructureTemplateDataResponsePacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI11CompoundTagSt14default_deleteIS9_EE29StructureTemplateResponseType
};

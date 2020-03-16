#pragma once

#include <memory>
#include <string>
#include "Packet.h"


class StructureTemplateDataResponsePacket : public Packet {

public:
    virtual ~StructureTemplateDataResponsePacket(); // _ZN35StructureTemplateDataResponsePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK35StructureTemplateDataResponsePacket5getIdEv
    virtual std::string getName()const; // _ZNK35StructureTemplateDataResponsePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK35StructureTemplateDataResponsePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN35StructureTemplateDataResponsePacket4readER20ReadOnlyBinaryStream
    StructureTemplateDataResponsePacket(); // _ZN35StructureTemplateDataResponsePacketC2Ev
//    StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag>, long); //TODO: incomplete function definition // _ZN35StructureTemplateDataResponsePacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI11CompoundTagSt14default_deleteIS9_EE29StructureTemplateResponseType
};

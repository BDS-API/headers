#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class UpdateSoftEnumPacket : Packet {

public:
    ~UpdateSoftEnumPacket(); // _ZN20UpdateSoftEnumPacketD2Ev
    virtual void getId()const; // _ZNK20UpdateSoftEnumPacket5getIdEv
    virtual std::string getName()const; // _ZNK20UpdateSoftEnumPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20UpdateSoftEnumPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20UpdateSoftEnumPacket4readER20ReadOnlyBinaryStream
    UpdateSoftEnumPacket(); // _ZN20UpdateSoftEnumPacketC2Ev
//  UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string> const&); //TODO: incomplete function definition // _ZN20UpdateSoftEnumPacketC2E18SoftEnumUpdateTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS6_SaIS6_EE
    std::string getEnumName()const; // _ZNK20UpdateSoftEnumPacket11getEnumNameB5cxx11Ev
    std::string getValues()const; // _ZNK20UpdateSoftEnumPacket9getValuesB5cxx11Ev
    void getType()const; // _ZNK20UpdateSoftEnumPacket7getTypeEv
};

#pragma once

#include <string>
#include "Packet.h"


class SetDisplayObjectivePacket : Packet {

public:
    ~SetDisplayObjectivePacket(); // _ZN25SetDisplayObjectivePacketD2Ev
    virtual void getId()const; // _ZNK25SetDisplayObjectivePacket5getIdEv
    virtual std::string getName()const; // _ZNK25SetDisplayObjectivePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK25SetDisplayObjectivePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN25SetDisplayObjectivePacket4readER20ReadOnlyBinaryStream
    SetDisplayObjectivePacket(); // _ZN25SetDisplayObjectivePacketC2Ev
//  SetDisplayObjectivePacket(std::string const&, std::string const&, std::string const&, std::string const&, ObjectiveSortOrder); //TODO: incomplete function definition // _ZN25SetDisplayObjectivePacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_18ObjectiveSortOrder
};

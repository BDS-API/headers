#pragma once

#include <string>
#include "Packet.h"


class AddBehaviorTreePacket : Packet {

public:
    ~AddBehaviorTreePacket(); // _ZN21AddBehaviorTreePacketD2Ev
    virtual void getId()const; // _ZNK21AddBehaviorTreePacket5getIdEv
    virtual std::string getName()const; // _ZNK21AddBehaviorTreePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK21AddBehaviorTreePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN21AddBehaviorTreePacket4readER20ReadOnlyBinaryStream
    AddBehaviorTreePacket(); // _ZN21AddBehaviorTreePacketC2Ev
    AddBehaviorTreePacket(std::string const&); // _ZN21AddBehaviorTreePacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getJsonInput()const; // _ZNK21AddBehaviorTreePacket12getJsonInputB5cxx11Ev
};

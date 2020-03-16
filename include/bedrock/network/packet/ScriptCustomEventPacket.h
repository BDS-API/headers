#pragma once

#include <string>
#include "Packet.h"


class ScriptCustomEventPacket : public Packet {

public:
    virtual ~ScriptCustomEventPacket(); // _ZN23ScriptCustomEventPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK23ScriptCustomEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK23ScriptCustomEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23ScriptCustomEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23ScriptCustomEventPacket4readER20ReadOnlyBinaryStream
    ScriptCustomEventPacket(); // _ZN23ScriptCustomEventPacketC2Ev
    ScriptCustomEventPacket(std::string const&, Json::Value const&); // _ZN23ScriptCustomEventPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
//    ScriptCustomEventPacket(long const&, Json::Value const&); //TODO: incomplete function definition // _ZN23ScriptCustomEventPacketC2ERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEERKN4Json5ValueE
    std::string getEventName()const; // _ZNK23ScriptCustomEventPacket12getEventNameB5cxx11Ev
    void getData()const; // _ZNK23ScriptCustomEventPacket7getDataEv
};

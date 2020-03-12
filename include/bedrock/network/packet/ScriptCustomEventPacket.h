#pragma once

#include <string>
#include "Packet.h"


class ScriptCustomEventPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~ScriptCustomEventPacket();
    ScriptCustomEventPacket(std::string const&, Json::Value const&);
    std::string getEventName()const;
    ScriptCustomEventPacket();
//  ScriptCustomEventPacket(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&, Json::Value const&); //TODO: incomplete function definition
    void getData()const;
};

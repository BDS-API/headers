#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include <memory>
#include "../../../json/Value.h"
#include "Packet.h"


class ScriptCustomEventPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~ScriptCustomEventPacket();
    void getData()const;
//  ScriptCustomEventPacket(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&, Json::Value const&); //TODO: incomplete function definition
    ScriptCustomEventPacket();
    std::string getEventName()const;
    ScriptCustomEventPacket(std::string const&, Json::Value const&);
};

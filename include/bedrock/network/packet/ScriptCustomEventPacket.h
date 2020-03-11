#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include "../../../json/Value.h"
#include <string>


class ScriptCustomEventPacket : Packet {

public:
    virtual ~ScriptCustomEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ScriptCustomEventPacket();
    ScriptCustomEventPacket(std::string const&, Json::Value const&);
//  ScriptCustomEventPacket(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&, Json::Value const&); //TODO: incomplete function definition
    std::string getEventName()const;
    void getData()const;
};

#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../json/Value"


class ScriptCustomEventPacket : Packet {

public:
    virtual ScriptCustomEventPacket::~ScriptCustomEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ScriptCustomEventPacket(void);
    ScriptCustomEventPacket(std::string const&, Json::Value const&);
    ScriptCustomEventPacket(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&, Json::Value const&);
    void getData()const;
};

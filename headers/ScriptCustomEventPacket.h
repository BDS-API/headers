#pragma once

class ScriptCustomEventPacket : Packet {

public:
    virtual ~ScriptCustomEventPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ScriptCustomEventPacket(void);
    void ScriptCustomEventPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void ScriptCustomEventPacket(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&, Json::Value const&);
    void getData(void)const;
};

#pragma once

class UpdateSoftEnumPacket : Packet {

public:
    virtual ~UpdateSoftEnumPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateSoftEnumPacket(void);
    void UpdateSoftEnumPacket(SoftEnumUpdateType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void getType(void)const;
};

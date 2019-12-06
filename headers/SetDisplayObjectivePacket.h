#pragma once

class SetDisplayObjectivePacket : Packet {

public:
    virtual ~SetDisplayObjectivePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetDisplayObjectivePacket(void);
    void SetDisplayObjectivePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ObjectiveSortOrder);
};

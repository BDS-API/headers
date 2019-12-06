#pragma once

class AddBehaviorTreePacket : Packet {

public:
    virtual ~AddBehaviorTreePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AddBehaviorTreePacket(void);
    void AddBehaviorTreePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};

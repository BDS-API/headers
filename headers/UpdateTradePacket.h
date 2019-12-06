#pragma once

class UpdateTradePacket : Packet {

public:
    virtual ~UpdateTradePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateTradePacket(void);
    void UpdateTradePacket(ContainerID, ContainerType, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CompoundTag &&, ActorUniqueID const&, ActorUniqueID const, int, bool, bool);
};

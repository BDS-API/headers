#pragma once

class UpdateTradePacket : Packet {

public:
    virtual UpdateTradePacket::~UpdateTradePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateTradePacket(void);
    UpdateTradePacket(ContainerID, ContainerType, int, std::string const&, CompoundTag &&, ActorUniqueID const&, ActorUniqueID const, int, bool, bool);
};

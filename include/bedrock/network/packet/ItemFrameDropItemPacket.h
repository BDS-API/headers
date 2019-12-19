#pragma once

class ItemFrameDropItemPacket : Packet {

public:
    virtual ItemFrameDropItemPacket::~ItemFrameDropItemPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    ItemFrameDropItemPacket(void);
    ItemFrameDropItemPacket(ItemStack const&);
};

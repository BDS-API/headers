#pragma once

class ItemFrameDropItemPacket : Packet {

public:
    virtual ~ItemFrameDropItemPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ItemFrameDropItemPacket(void);
    void ItemFrameDropItemPacket(ItemStack const&);
};

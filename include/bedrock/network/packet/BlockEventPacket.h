#pragma once

class BlockEventPacket : Packet {

public:
    virtual BlockEventPacket::~BlockEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockEventPacket(BlockPos, int, int);
    BlockEventPacket(void);
};

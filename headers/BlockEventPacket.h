#pragma once

class BlockEventPacket : Packet {

public:
    virtual ~BlockEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void BlockEventPacket(BlockPos, int, int);
    void BlockEventPacket(void);
};

#pragma once

class UpdateBlockPacket : Packet {

public:
    virtual ~UpdateBlockPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateBlockPacket(void);
    void UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

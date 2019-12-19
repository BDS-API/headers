#pragma once

class BlockPickRequestPacket : Packet {

public:
    virtual BlockPickRequestPacket::~BlockPickRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockPickRequestPacket(void);
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

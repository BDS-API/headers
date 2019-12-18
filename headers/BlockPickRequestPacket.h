#pragma once

class BlockPickRequestPacket : Packet {

public:
    virtual ~BlockPickRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void BlockPickRequestPacket(void);
    void BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

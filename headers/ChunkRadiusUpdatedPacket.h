#pragma once

class ChunkRadiusUpdatedPacket : Packet {

public:
    virtual ~ChunkRadiusUpdatedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void ChunkRadiusUpdatedPacket(void);
    void ChunkRadiusUpdatedPacket(int);
};

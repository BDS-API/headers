#pragma once

class BlockActorDataPacket : Packet {

public:
    virtual BlockActorDataPacket::~BlockActorDataPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockActorDataPacket(void);
    BlockActorDataPacket(BlockActorDataPacket const&);
    BlockActorDataPacket(BlockPos const&, CompoundTag);
};

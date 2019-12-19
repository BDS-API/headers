#pragma once

class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    virtual UpdateBlockSyncedPacket::~UpdateBlockSyncedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockSyncedPacket(void);
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
};

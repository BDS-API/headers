#pragma once

class SetSpawnPositionPacket : Packet {

public:
    virtual SetSpawnPositionPacket::~SetSpawnPositionPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetSpawnPositionPacket(void);
    SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool);
};

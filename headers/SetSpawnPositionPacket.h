#pragma once

class SetSpawnPositionPacket : Packet {

public:
    virtual ~SetSpawnPositionPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetSpawnPositionPacket(void);
    void SetSpawnPositionPacket(BlockPos const&, SpawnPositionType, bool);
};

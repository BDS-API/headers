#pragma once

class BlockActorDataPacket : Packet {

public:
    virtual ~BlockActorDataPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void BlockActorDataPacket(void);
    void BlockActorDataPacket(BlockActorDataPacket const&);
    void BlockActorDataPacket(BlockPos const&, CompoundTag);
};

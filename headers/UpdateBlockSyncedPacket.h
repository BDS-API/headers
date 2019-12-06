#pragma once

class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    virtual ~UpdateBlockSyncedPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateBlockSyncedPacket(void);
    void UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
};

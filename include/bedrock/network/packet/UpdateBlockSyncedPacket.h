#pragma once

#include <string>
#include "UpdateBlockPacket.h"


class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~UpdateBlockSyncedPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
    UpdateBlockSyncedPacket();
};

#pragma once

#include "../../actor/unmapped/ActorBlockSyncMessage"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/Block"


class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    UpdateBlockSyncedPacket::~UpdateBlockSyncedPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockSyncedPacket(void);
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorBlockSyncMessage"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../io/ReadOnlyBinaryStream"


class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    virtual UpdateBlockSyncedPacket::~UpdateBlockSyncedPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockSyncedPacket(void);
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
};

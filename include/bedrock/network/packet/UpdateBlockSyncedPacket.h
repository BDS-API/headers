#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/Block.h"
#include "UpdateBlockPacket.h"
#include "../../util/BlockPos.h"
#include "../../actor/unmapped/ActorBlockSyncMessage.h"


class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~UpdateBlockSyncedPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
    UpdateBlockSyncedPacket();
};

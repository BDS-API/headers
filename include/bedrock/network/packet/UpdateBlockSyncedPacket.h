#pragma once

#include "../../../unmapped/Block.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorBlockSyncMessage.h"
#include "./UpdateBlockPacket.h"
#include "../../util/BlockPos.h"
#include <string>


class UpdateBlockSyncedPacket : UpdateBlockPacket {

public:
    virtual ~UpdateBlockSyncedPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockSyncedPacket();
    UpdateBlockSyncedPacket(BlockPos const&, unsigned int, Block const&, unsigned char, ActorBlockSyncMessage const&);
};

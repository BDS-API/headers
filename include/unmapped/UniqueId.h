#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "./UniqueId.h"
#include "../bedrock/nbt/CompoundTag.h"


namespace MapItemTrackedActor {

class UniqueId {

public:

    UniqueId(MapItemTrackedActor::UniqueId const&);
    UniqueId();
    void operator==(MapItemTrackedActor::UniqueId const&)const;
    UniqueId(ActorUniqueID const&);
    UniqueId(BlockPos const&);
    void load(CompoundTag const&);
    void save(CompoundTag &)const;
};

}
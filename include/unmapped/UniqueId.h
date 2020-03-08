#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/nbt/CompoundTag"


using namespace MapItemTrackedActor;

class UniqueId {

public:

    UniqueId(MapItemTrackedActor::UniqueId const&);
    UniqueId(void);
    UniqueId(ActorUniqueID const&);
    UniqueId(BlockPos const&);
    void load(CompoundTag const&);
    void save(CompoundTag &)const;
};

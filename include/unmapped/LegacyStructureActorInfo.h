#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"


class LegacyStructureActorInfo {

public:
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
    LegacyStructureActorInfo(LegacyStructureActorInfo &&);
    ~LegacyStructureActorInfo();
};

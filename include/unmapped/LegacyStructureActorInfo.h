#pragma once

#include "./LegacyStructureActorInfo.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/util/BlockPos.h"


class LegacyStructureActorInfo {

public:

    ~LegacyStructureActorInfo();
    LegacyStructureActorInfo(LegacyStructureActorInfo &&);
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
};

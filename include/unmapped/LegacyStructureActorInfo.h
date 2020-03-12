#pragma once

#include "../bedrock/nbt/CompoundTag.h"


class LegacyStructureActorInfo {

public:
    ~LegacyStructureActorInfo();
    LegacyStructureActorInfo(LegacyStructureActorInfo &&);
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
};

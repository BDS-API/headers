#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/util/BlockPos"
#include "../bedrock/nbt/CompoundTag"


class LegacyStructureActorInfo {

public:

    LegacyStructureActorInfo(LegacyStructureActorInfo&&);
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
};

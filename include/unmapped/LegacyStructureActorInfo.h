#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/nbt/CompoundTag"


class LegacyStructureActorInfo {

public:

    LegacyStructureActorInfo(LegacyStructureActorInfo&&);
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
};

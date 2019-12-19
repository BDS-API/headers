#pragma once

class LegacyStructureActorInfo {

public:

    LegacyStructureActorInfo(LegacyStructureActorInfo&&);
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
};

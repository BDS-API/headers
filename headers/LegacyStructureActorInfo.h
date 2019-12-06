#pragma once

class LegacyStructureActorInfo {

public:

    void LegacyStructureActorInfo(LegacyStructureActorInfo&&);
    void LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag);
};

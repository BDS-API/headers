#pragma once

#include "../bedrock/nbt/CompoundTag.h"


class LegacyStructureActorInfo {

public:
    ~LegacyStructureActorInfo(); // _ZN24LegacyStructureActorInfoD2Ev
    LegacyStructureActorInfo(LegacyStructureActorInfo &&); // _ZN24LegacyStructureActorInfoC2EOS_
    LegacyStructureActorInfo(Vec3 const&, BlockPos const&, CompoundTag); // _ZN24LegacyStructureActorInfoC2ERK4Vec3RK8BlockPos11CompoundTag
};

#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/Actor.h"


class GrowsCropComponent {

public:
    GrowsCropComponent(GrowsCropComponent &&);
    GrowsCropComponent();
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAdditionalSaveData(CompoundTag &);
};

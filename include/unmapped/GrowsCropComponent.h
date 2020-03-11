#pragma once

#include "./GrowsCropComponent.h"
#include "../bedrock/actor/Actor.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"


class GrowsCropComponent {

public:

    GrowsCropComponent(GrowsCropComponent &&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    GrowsCropComponent();
};

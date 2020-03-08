#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class GrowsCropComponent {

public:

    GrowsCropComponent(GrowsCropComponent&&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    GrowsCropComponent(void);
};

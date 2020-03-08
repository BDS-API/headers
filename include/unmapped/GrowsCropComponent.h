#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class GrowsCropComponent {

public:

    GrowsCropComponent(GrowsCropComponent&&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    GrowsCropComponent(void);
};

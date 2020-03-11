#pragma once

#include "../bedrock/actor/Actor.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"


class HideComponent {

public:

    HideComponent();
    void initFromDefinition(Actor &);
    bool isInRaid();
    bool isReactingToBell();
    void setInRaid();
    void setReactingToBell();
    void setNotHiding();
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
};

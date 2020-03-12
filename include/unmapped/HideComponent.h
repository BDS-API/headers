#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/Actor.h"


class HideComponent {

public:
    void initFromDefinition(Actor &);
    void setNotHiding();
    void setReactingToBell();
    bool isReactingToBell();
    HideComponent();
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    bool isInRaid();
    void addAdditionalSaveData(CompoundTag &);
    void setInRaid();
};

#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class HideComponent {

public:

    HideComponent(void);
    void initFromDefinition(Actor &);
    bool isInRaid();
    bool isReactingToBell();
    void setInRaid();
    void setReactingToBell();
    void setNotHiding();
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
};

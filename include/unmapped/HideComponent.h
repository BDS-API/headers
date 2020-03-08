#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


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

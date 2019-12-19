#pragma once

class HideComponent {

public:

    HideComponent(void);
    void initFromDefinition(Actor &);
    bool isInRaid(void);
    bool isReactingToBell(void);
    void setInRaid(void);
    void setReactingToBell(void);
    void setNotHiding(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
};

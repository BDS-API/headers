#pragma once



class HideComponent {

public:
    void initFromDefinition(Actor &);
    HideComponent();
    void setInRaid();
    void addAdditionalSaveData(CompoundTag &);
    void setReactingToBell();
    bool isInRaid();
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    void setNotHiding();
    bool isReactingToBell();
};

#pragma once



class HideComponent {

public:
    HideComponent(); // _ZN13HideComponentC2Ev
    void initFromDefinition(Actor &); // _ZN13HideComponent18initFromDefinitionER5Actor
    bool isInRaid(); // _ZN13HideComponent8isInRaidEv
    bool isReactingToBell(); // _ZN13HideComponent16isReactingToBellEv
    void setInRaid(); // _ZN13HideComponent9setInRaidEv
    void setReactingToBell(); // _ZN13HideComponent17setReactingToBellEv
    void setNotHiding(); // _ZN13HideComponent12setNotHidingEv
    void addAdditionalSaveData(CompoundTag &); // _ZN13HideComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN13HideComponent22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
};

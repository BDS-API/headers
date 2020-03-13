#pragma once

#include "Monster.h"


class Endermite : Monster {

public:
    ~Endermite(); // _ZN9EndermiteD2Ev
    virtual void normalTick(); // _ZN9Endermite10normalTickEv
    virtual void getRidingHeight(); // _ZN9Endermite15getRidingHeightEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN9Endermite22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN9Endermite21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN9Endermite14_onSizeUpdatedEv
    virtual void aiStep(); // _ZN9Endermite6aiStepEv
    virtual void checkSpawnRules(bool); // _ZN9Endermite15checkSpawnRulesEb
    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9EndermiteC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};

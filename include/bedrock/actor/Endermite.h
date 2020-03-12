#pragma once

#include "Monster.h"


class Endermite : Monster {

public:
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void _onSizeUpdated();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void checkSpawnRules(bool);
    virtual void aiStep();
    ~Endermite();
    virtual void normalTick();
    virtual void getRidingHeight();
    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

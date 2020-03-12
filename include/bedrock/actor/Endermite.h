#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class Endermite : Monster {

public:
    virtual void checkSpawnRules(bool);
    virtual void aiStep();
    virtual void addAdditionalSaveData(CompoundTag &);
    ~Endermite();
    virtual void getRidingHeight();
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void _onSizeUpdated();
    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

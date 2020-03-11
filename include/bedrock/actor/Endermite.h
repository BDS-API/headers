#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Monster.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Endermite : Monster {

public:
    virtual ~Endermite();
    virtual void normalTick();
    virtual void getRidingHeight();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);

    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

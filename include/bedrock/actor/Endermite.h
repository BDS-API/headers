#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Endermite : Monster {

public:
    Endermite::~Endermite()
    virtual void normalTick();
    virtual void getRidingHeight();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);

    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

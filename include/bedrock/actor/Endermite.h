#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Endermite : Monster {

public:
    virtual Endermite::~Endermite()
    virtual void normalTick();
    virtual void getRidingHeight();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void aiStep();
    virtual void checkSpawnRules(bool);

    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

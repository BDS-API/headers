#pragma once

#include "../nbt/CompoundTag"
#include "../../unmapped/ActorDefinitionGroup"


class Endermite : Monster {

public:
    virtual Endermite::~Endermite();
    virtual void normalTick(void);
    virtual void getRidingHeight(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);

    Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

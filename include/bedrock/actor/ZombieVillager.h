#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class ZombieVillager : Zombie {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    ZombieVillager::~ZombieVillager()
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setSpawnedFromVillage();
    void setProfession(Profession);
    void getProfession();
};

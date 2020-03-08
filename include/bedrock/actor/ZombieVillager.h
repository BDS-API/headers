#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class ZombieVillager : Zombie {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ZombieVillager::~ZombieVillager()
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setSpawnedFromVillage();
    void setProfession(Profession);
    void getProfession();
};

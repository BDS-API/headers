#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"


class ZombieVillager : Zombie {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ZombieVillager::~ZombieVillager();
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setSpawnedFromVillage(void);
    void setProfession(Profession);
    void getProfession(void);
};

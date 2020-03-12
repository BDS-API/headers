#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Zombie.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class ZombieVillager : Zombie {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    ~ZombieVillager();
    virtual void addAdditionalSaveData(CompoundTag &);
//  void setProfession(Profession); //TODO: incomplete function definition
    void getProfession();
    void setSpawnedFromVillage();
    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

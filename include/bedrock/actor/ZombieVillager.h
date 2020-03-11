#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "./Zombie.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class ZombieVillager : Zombie {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ZombieVillager();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setSpawnedFromVillage();
//  void setProfession(Profession); //TODO: incomplete function definition
    void getProfession();
};

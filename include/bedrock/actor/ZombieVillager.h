#pragma once

#include "Zombie.h"


class ZombieVillager : Zombie {

public:
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~ZombieVillager();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    void setSpawnedFromVillage();
//  void setProfession(Profession); //TODO: incomplete function definition
    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getProfession();
};

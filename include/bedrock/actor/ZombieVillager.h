#pragma once

#include "Zombie.h"


class ZombieVillager : public Zombie {

public:
    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN14ZombieVillager15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~ZombieVillager(); // _ZN14ZombieVillagerD2Ev
    virtual void __fake_function0(); // fake
    virtual void handleEntityEvent__incomplete0(long, int); //TODO: incomplete function definition // _ZN14ZombieVillager17handleEntityEventE10ActorEventi
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN14ZombieVillager22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN14ZombieVillager21addAdditionalSaveDataER11CompoundTag
    ZombieVillager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN14ZombieVillagerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setSpawnedFromVillage(); // _ZN14ZombieVillager21setSpawnedFromVillageEv
//    void setProfession(long); //TODO: incomplete function definition // _ZN14ZombieVillager13setProfessionE10Profession
    void getProfession(); // _ZN14ZombieVillager13getProfessionEv
};

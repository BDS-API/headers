#pragma once

#include "./LootTable.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"


class LootTableContext {

public:

    ~LootTableContext();
    LootTableContext(float, Level *, Actor *, Player *, ActorDamageSource const*, float);
    void getThisEntity()const;
    void getKillerPlayer()const;
    void getKillerPet()const;
    void getLevel()const;
    void getKillerEntity()const;
    void getDeathSource()const;
    void addVisitedTable(LootTable const*);
    void removeVisitedTable(LootTable const*);
    void getLuck()const;
//  void getEntity(ActorTarget)const; //TODO: incomplete function definition
    void getExplosionRadius()const;
};

#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/level/Level"
#include "../bedrock/actor/Player"


class LootTableContext {

public:

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
    void getEntity(ActorTarget)const;
    void getExplosionRadius()const;
};

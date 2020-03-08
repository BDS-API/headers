#pragma once

#include "../bedrock/level/Level"


class LootTableContext {

public:

    LootTableContext(float, Level *, Actor *, Player *, ActorDamageSource const*, float);
    void getThisEntity(void)const;
    void getKillerPlayer(void)const;
    void getKillerPet(void)const;
    void getLevel(void)const;
    void getKillerEntity(void)const;
    void getDeathSource(void)const;
    void addVisitedTable(LootTable const*);
    void removeVisitedTable(LootTable const*);
    void getLuck(void)const;
    void getEntity(ActorTarget)const;
    void getExplosionRadius(void)const;
};

#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"
#include "LootTable.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"


class LootTableContext {

public:
    class Builder;

    void getExplosionRadius()const;
    ~LootTableContext();
    void getLuck()const;
    void getThisEntity()const;
    void getKillerPet()const;
    void getKillerPlayer()const;
    void getLevel()const;
    void getDeathSource()const;
//  void getEntity(ActorTarget)const; //TODO: incomplete function definition
    void removeVisitedTable(LootTable const*);
    LootTableContext(float, Level *, Actor *, Player *, ActorDamageSource const*, float);
    void addVisitedTable(LootTable const*);
    void getKillerEntity()const;
    class Builder {

    public:
        void withKillerPlayer(Player *);
        void create()const;
        void withThisEntity(Actor *);
        void withExplosionRadius(float);
        Builder(Level *);
        void withDeathSource(ActorDamageSource const*);
        void withLuck(float);
    };
};

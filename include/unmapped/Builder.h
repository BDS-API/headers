#pragma once

#include "../bedrock/level/Level"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/damagesource/ActorDamageSource"


using namespace LootTableContext;

class Builder {

public:

    Builder(Level *);
    void withLuck(float);
    void withThisEntity(Actor *);
    void withKillerPlayer(Player *);
    void withDeathSource(ActorDamageSource const*);
    void withExplosionRadius(float);
    void create(void)const;
};

#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/level/Level"
#include "../bedrock/actor/Player"


using namespace LootTableContext;

class Builder {

public:

    Builder(Level *);
    void withLuck(float);
    void withThisEntity(Actor *);
    void withKillerPlayer(Player *);
    void withDeathSource(ActorDamageSource const*);
    void withExplosionRadius(float);
    void create()const;
};

#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"


namespace LootTableContext {

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

}
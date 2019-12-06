#pragma once

class LootTableContext::Builder {

public:

    void Builder(Level *);
    void withLuck(float);
    void withThisEntity(Actor *);
    void withKillerPlayer(Player *);
    void withDeathSource(ActorDamageSource const*);
    void withExplosionRadius(float);
    void create(void)const;
};

#pragma once

class IllagerBeast : Monster {

public:
    virtual IllagerBeast::~IllagerBeast();
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void aiStep(void);

    IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

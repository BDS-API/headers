#pragma once

class IllagerBeast : Monster {

public:
    virtual ~IllagerBeast();
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void aiStep(void);

    void IllagerBeast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

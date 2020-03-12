#pragma once

#include "HumanoidMonster.h"


class Witch : HumanoidMonster {

public:
    static long SPEED_MODIFIER_DRINKING_UUID;
    static long SPEED_MODIFIER_DRINKING;

    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _onSizeUpdated();
    ~Witch();
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual bool canAttack(Actor *, bool)const;
    virtual void performRangedAttack(Actor &, float);
    virtual void aiStep();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    Witch(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setUsingItem(bool);
    bool isUsingItem();
};

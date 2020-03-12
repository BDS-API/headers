#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "HumanoidMonster.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"


class Witch : HumanoidMonster {

public:
    static long SPEED_MODIFIER_DRINKING_UUID;
    static long SPEED_MODIFIER_DRINKING;

    virtual void performRangedAttack(Actor &, float);
    virtual void _onSizeUpdated();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual bool canAttack(Actor *, bool)const;
    virtual void aiStep();
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    ~Witch();
    void setUsingItem(bool);
    Witch(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isUsingItem();
};

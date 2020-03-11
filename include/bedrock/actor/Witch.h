#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "damagesource/ActorDamageSource.h"
#include "./HumanoidMonster.h"
#include "unmapped/ActorDefinitionGroup.h"


class Witch : HumanoidMonster {

public:
    static long SPEED_MODIFIER_DRINKING_UUID;
    static long SPEED_MODIFIER_DRINKING;

    virtual ~Witch();
    virtual bool canAttack(Actor *, bool)const;
    virtual void performRangedAttack(Actor &, float);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _onSizeUpdated();
    virtual void aiStep();
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);

    Witch(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setUsingItem(bool);
    bool isUsingItem();
};

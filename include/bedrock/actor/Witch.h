#pragma once

#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Witch : HumanoidMonster {

public:
    static long SPEED_MODIFIER_DRINKING_UUID;
    static long SPEED_MODIFIER_DRINKING;

    virtual Witch::~Witch()
    virtual bool canAttack(Actor *, bool)const;
    virtual void performRangedAttack(Actor &, float);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _onSizeUpdated();
    virtual void aiStep();
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);

    Witch(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setUsingItem(bool);
    bool isUsingItem();
};

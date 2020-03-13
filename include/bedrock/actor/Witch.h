#pragma once

#include "HumanoidMonster.h"


class Witch : HumanoidMonster {

public:
    static long SPEED_MODIFIER_DRINKING_UUID;
    static long SPEED_MODIFIER_DRINKING;

    ~Witch(); // _ZN5WitchD2Ev
    virtual bool canAttack(Actor *, bool)const; // _ZNK5Witch9canAttackEP5Actorb
    virtual void performRangedAttack(Actor &, float); // _ZN5Witch19performRangedAttackER5Actorf
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN5Witch17handleEntityEventE10ActorEventi
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN5Witch35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _onSizeUpdated(); // _ZN5Witch14_onSizeUpdatedEv
    virtual void aiStep(); // _ZN5Witch6aiStepEv
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int); // _ZN5Witch25getDamageAfterMagicAbsorbERK17ActorDamageSourcei
    Witch(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5WitchC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setUsingItem(bool); // _ZN5Witch12setUsingItemEb
    bool isUsingItem(); // _ZN5Witch11isUsingItemEv
};

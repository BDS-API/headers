#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"


class Ghast : Mob {

public:
    Ghast::~Ghast()
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSoundPostponeTicks();
    virtual void useNewAi()const;

    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isCharging();
};

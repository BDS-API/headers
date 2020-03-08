#pragma once

#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "unmapped/ActorDefinitionIdentifier"


class Ghast : Mob {

public:
    virtual Ghast::~Ghast()
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSoundPostponeTicks();
    virtual void useNewAi()const;

    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isCharging();
};

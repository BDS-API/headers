#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"


class Ghast : Mob {

public:
    virtual ~Ghast();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSoundPostponeTicks();
    virtual void useNewAi()const;

    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isCharging();
};

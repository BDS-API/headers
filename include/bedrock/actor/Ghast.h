#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class Ghast : Mob {

public:
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getAmbientSoundPostponeTicks();
    virtual void useNewAi()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Ghast();
    bool isCharging();
    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

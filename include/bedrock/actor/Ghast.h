#pragma once

#include "Mob.h"


class Ghast : Mob {

public:
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    ~Ghast();
    virtual void useNewAi()const;
    virtual void getAmbientSoundPostponeTicks();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isCharging();
};

#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"


class Ghast : Mob {

public:
    virtual Ghast::~Ghast();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAmbientSoundPostponeTicks(void);
    virtual void useNewAi(void)const;

    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isCharging(void);
};

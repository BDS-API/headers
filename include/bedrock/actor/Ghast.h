#pragma once

#include "Mob.h"


class Ghast : Mob {

public:
    ~Ghast(); // _ZN5GhastD2Ev
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN5Ghast35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN5Ghast5_hurtERK17ActorDamageSourceibb
    virtual void getAmbientSoundPostponeTicks(); // _ZN5Ghast28getAmbientSoundPostponeTicksEv
    virtual void useNewAi()const; // _ZNK5Ghast8useNewAiEv
    Ghast(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5GhastC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    bool isCharging(); // _ZN5Ghast10isChargingEv
};

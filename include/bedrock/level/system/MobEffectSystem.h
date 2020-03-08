#pragma once

#include "../../../unmapped/MobEffectComponent"
#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"


class MobEffectSystem : ITickingSystem {

public:
    virtual MobEffectSystem::~MobEffectSystem()
    virtual void tick(EntityRegistry &);

    MobEffectSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &);
};

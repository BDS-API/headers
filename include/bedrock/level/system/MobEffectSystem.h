#pragma once

#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"
#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/MobEffectComponent"


class MobEffectSystem : ITickingSystem {

public:
    MobEffectSystem::~MobEffectSystem()
    virtual void tick(EntityRegistry &);

    MobEffectSystem(void);
    void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &);
};

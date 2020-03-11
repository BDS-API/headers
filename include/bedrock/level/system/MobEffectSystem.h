#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/MobEffectComponent.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/EntityRegistry.h"
#include "../../../unmapped/EntityContext.h"


class MobEffectSystem : ITickingSystem {

public:
    virtual ~MobEffectSystem();
    virtual void tick(EntityRegistry &);

    MobEffectSystem();
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &); //TODO: incomplete function definition
};

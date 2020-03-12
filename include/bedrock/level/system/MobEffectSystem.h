#pragma once

#include "../../actor/unmapped/ActorComponent.h"
#include "ITickingSystem.h"
#include "../../../unmapped/EntityContext.h"
#include "../../../unmapped/MobEffectComponent.h"
#include "../../../unmapped/EntityRegistry.h"


class MobEffectSystem : ITickingSystem {

public:
    ~MobEffectSystem();
    virtual void tick(EntityRegistry &);
//  void _tickComponent(EntityContext &, FlagComponent<ActorTickedFlag> &, ActorComponent &, MobEffectComponent &); //TODO: incomplete function definition
    MobEffectSystem();
};

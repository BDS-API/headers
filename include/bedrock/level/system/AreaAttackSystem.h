#pragma once

#include "./ITickingSystem.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/AreaAttackComponent.h"
#include "../../../unmapped/EntityRegistry.h"
#include "../../../unmapped/EntityContext.h"


class AreaAttackSystem : ITickingSystem {

public:
    virtual ~AreaAttackSystem();
    virtual void tick(EntityRegistry &);

    AreaAttackSystem();
//  void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &); //TODO: incomplete function definition
};

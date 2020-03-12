#pragma once

#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/AreaAttackComponent.h"
#include "ITickingSystem.h"
#include "../../../unmapped/EntityContext.h"
#include "../../../unmapped/EntityRegistry.h"


class AreaAttackSystem : ITickingSystem {

public:
    ~AreaAttackSystem();
    virtual void tick(EntityRegistry &);
//  void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &); //TODO: incomplete function definition
    AreaAttackSystem();
};

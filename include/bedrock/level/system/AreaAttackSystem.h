#pragma once

#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"
#include "../../../unmapped/AreaAttackComponent"
#include "../../actor/unmapped/ActorComponent"


class AreaAttackSystem : ITickingSystem {

public:
    AreaAttackSystem::~AreaAttackSystem()
    virtual void tick(EntityRegistry &);

    AreaAttackSystem(void);
    void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &);
};

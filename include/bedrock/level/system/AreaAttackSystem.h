#pragma once

#include "../../../unmapped/AreaAttackComponent"
#include "../../actor/unmapped/ActorComponent"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"


class AreaAttackSystem : ITickingSystem {

public:
    virtual AreaAttackSystem::~AreaAttackSystem()
    virtual void tick(EntityRegistry &);

    AreaAttackSystem(void);
    void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &);
};

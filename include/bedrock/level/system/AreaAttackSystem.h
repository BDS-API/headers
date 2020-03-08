#pragma once

#include "../../../unmapped/EntityContext"
#include "../../../unmapped/AreaAttackComponent"
#include "../../../unmapped/ActorComponent"
#include "../../../unmapped/EntityRegistry"


class AreaAttackSystem : ITickingSystem {

public:
    virtual AreaAttackSystem::~AreaAttackSystem();
    virtual void tick(EntityRegistry &);

    AreaAttackSystem(void);
    void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &);
};

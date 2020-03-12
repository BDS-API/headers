#pragma once

#include "ITickingSystem.h"


class AreaAttackSystem : ITickingSystem {

public:
    ~AreaAttackSystem();
    virtual void tick(EntityRegistry &);
    AreaAttackSystem();
//  void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &); //TODO: incomplete function definition
};

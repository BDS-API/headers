#pragma once

#include "ITickingSystem.h"


class AreaAttackSystem : ITickingSystem {

public:
    ~AreaAttackSystem(); // _ZN16AreaAttackSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN16AreaAttackSystem4tickER14EntityRegistry
    AreaAttackSystem(); // _ZN16AreaAttackSystemC2Ev
//  void _tickComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, AreaAttackComponent> &); //TODO: incomplete function definition // _ZN16AreaAttackSystem14_tickComponentER20ViewedEntityContextTI13EntityContextJ13FlagComponentI15ActorTickedFlagE14ActorComponent19AreaAttackComponentEE
};

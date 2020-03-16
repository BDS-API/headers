#pragma once

#include "ITickingSystem.h"


class AreaAttackSystem : public ITickingSystem {

public:
    virtual ~AreaAttackSystem(); // _ZN16AreaAttackSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN16AreaAttackSystem4tickER14EntityRegistry
    AreaAttackSystem(); // _ZN16AreaAttackSystemC2Ev
//    void _tickComponent(long &); //TODO: incomplete function definition // _ZN16AreaAttackSystem14_tickComponentER20ViewedEntityContextTI13EntityContextJ13FlagComponentI15ActorTickedFlagE14ActorComponent19AreaAttackComponentEE
};

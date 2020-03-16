#pragma once

#include "ITickingSystem.h"


class DamageOverTimeSystem : public ITickingSystem {

public:
    virtual ~DamageOverTimeSystem(); // _ZN20DamageOverTimeSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN20DamageOverTimeSystem4tickER14EntityRegistry
    DamageOverTimeSystem(); // _ZN20DamageOverTimeSystemC2Ev
};

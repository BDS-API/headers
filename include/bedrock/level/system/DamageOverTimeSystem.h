#pragma once

#include "ITickingSystem.h"


class DamageOverTimeSystem : ITickingSystem {

public:
    ~DamageOverTimeSystem(); // _ZN20DamageOverTimeSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN20DamageOverTimeSystem4tickER14EntityRegistry
    DamageOverTimeSystem(); // _ZN20DamageOverTimeSystemC2Ev
};

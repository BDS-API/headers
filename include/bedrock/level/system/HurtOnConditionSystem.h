#pragma once

#include "ITickingSystem.h"


class HurtOnConditionSystem : ITickingSystem {

public:
    ~HurtOnConditionSystem(); // _ZN21HurtOnConditionSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN21HurtOnConditionSystem4tickER14EntityRegistry
    HurtOnConditionSystem(); // _ZN21HurtOnConditionSystemC2Ev
};

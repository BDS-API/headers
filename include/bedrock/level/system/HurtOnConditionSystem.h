#pragma once

#include "ITickingSystem.h"


class HurtOnConditionSystem : public ITickingSystem {

public:
    virtual ~HurtOnConditionSystem(); // _ZN21HurtOnConditionSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN21HurtOnConditionSystem4tickER14EntityRegistry
    HurtOnConditionSystem(); // _ZN21HurtOnConditionSystemC2Ev
};

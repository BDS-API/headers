#pragma once

#include "ITickingSystem.h"


class HurtOnConditionSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~HurtOnConditionSystem();
    HurtOnConditionSystem();
};

#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class HurtOnConditionSystem : ITickingSystem {

public:
    ~HurtOnConditionSystem();
    virtual void tick(EntityRegistry &);
    HurtOnConditionSystem();
};

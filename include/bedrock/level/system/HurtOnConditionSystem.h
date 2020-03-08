#pragma once

#include "../../../unmapped/EntityRegistry"


class HurtOnConditionSystem : ITickingSystem {

public:
    HurtOnConditionSystem::~HurtOnConditionSystem()
    virtual void tick(EntityRegistry &);

    HurtOnConditionSystem(void);
};

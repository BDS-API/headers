#pragma once

#include "../../../unmapped/EntityRegistry"


class HurtOnConditionSystem : ITickingSystem {

public:
    virtual HurtOnConditionSystem::~HurtOnConditionSystem()
    virtual void tick(EntityRegistry &);

    HurtOnConditionSystem(void);
};

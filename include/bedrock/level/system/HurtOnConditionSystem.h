#pragma once

class HurtOnConditionSystem : ITickingSystem {

public:
    virtual HurtOnConditionSystem::~HurtOnConditionSystem();
    virtual void tick(EntityRegistry &);

    HurtOnConditionSystem(void);
};

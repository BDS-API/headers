#pragma once

class HurtOnConditionSystem : ITickingSystem {

public:
    virtual ~HurtOnConditionSystem();
    virtual void tick(EntityRegistry &);

    void HurtOnConditionSystem(void);
};

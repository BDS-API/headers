#pragma once

class BehaviorSystem : ITickingSystem {

public:
    virtual ~BehaviorSystem();
    virtual void tick(EntityRegistry &);

    void BehaviorSystem(void);
};

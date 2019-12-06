#pragma once

class BribeableSystem : ITickingSystem {

public:
    virtual ~BribeableSystem();
    virtual void tick(EntityRegistry &);

    void BribeableSystem(void);
};

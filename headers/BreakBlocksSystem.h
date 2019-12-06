#pragma once

class BreakBlocksSystem : ITickingSystem {

public:
    virtual ~BreakBlocksSystem();
    virtual void tick(EntityRegistry &);

    void BreakBlocksSystem(void);
};

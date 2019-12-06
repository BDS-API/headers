#pragma once

class HopperSystem : ITickingSystem {

public:
    virtual ~HopperSystem();
    virtual void tick(EntityRegistry &);

    void HopperSystem(void);
};

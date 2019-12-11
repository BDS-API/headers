#pragma once

class BlockBreakSensorSystem : ITickingSystem {

public:
    virtual ~BlockBreakSensorSystem();
    virtual void tick(EntityRegistry &);

    void BlockBreakSensorSystem(void);
};

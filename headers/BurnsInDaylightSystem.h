#pragma once

class BurnsInDaylightSystem : ITickingSystem {

public:
    virtual ~BurnsInDaylightSystem();
    virtual void tick(EntityRegistry &);

    void BurnsInDaylightSystem(void);
};

#pragma once

class RailActivatorSystem : ITickingSystem {

public:
    virtual ~RailActivatorSystem();
    virtual void tick(EntityRegistry &);

    void RailActivatorSystem(void);
};

#pragma once

class LeashableSystem : ITickingSystem {

public:
    virtual ~LeashableSystem();
    virtual void tick(EntityRegistry &);

    void LeashableSystem(void);
};

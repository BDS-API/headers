#pragma once

class LeashableSystem : ITickingSystem {

public:
    virtual LeashableSystem::~LeashableSystem();
    virtual void tick(EntityRegistry &);

    LeashableSystem(void);
};

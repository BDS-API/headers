#pragma once

class ExplodeSystem : ITickingSystem {

public:
    virtual ExplodeSystem::~ExplodeSystem();
    virtual void tick(EntityRegistry &);

    ExplodeSystem(void);
};

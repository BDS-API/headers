#pragma once

class MoveControlSystem : ITickingSystem {

public:
    virtual MoveControlSystem::~MoveControlSystem();
    virtual void tick(EntityRegistry &);

    MoveControlSystem(void);
};

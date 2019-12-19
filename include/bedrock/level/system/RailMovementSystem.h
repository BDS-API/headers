#pragma once

class RailMovementSystem : ITickingSystem {

public:
    virtual RailMovementSystem::~RailMovementSystem();
    virtual void tick(EntityRegistry &);

};

#pragma once

class RailMovementSystem : ITickingSystem {

public:
    virtual ~RailMovementSystem();
    virtual void tick(EntityRegistry &);

};

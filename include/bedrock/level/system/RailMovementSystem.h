#pragma once

#include "../../../unmapped/EntityRegistry"


class RailMovementSystem : ITickingSystem {

public:
    RailMovementSystem::~RailMovementSystem()
    virtual void tick(EntityRegistry &);

};

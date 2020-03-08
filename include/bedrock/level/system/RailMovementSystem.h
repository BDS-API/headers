#pragma once

#include "../../../unmapped/EntityRegistry"


class RailMovementSystem : ITickingSystem {

public:
    virtual RailMovementSystem::~RailMovementSystem()
    virtual void tick(EntityRegistry &);

};

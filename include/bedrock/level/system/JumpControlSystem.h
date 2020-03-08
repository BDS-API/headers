#pragma once

#include "../../../unmapped/EntityRegistry"


class JumpControlSystem : ITickingSystem {

public:
    JumpControlSystem::~JumpControlSystem()
    virtual void tick(EntityRegistry &);

    JumpControlSystem(void);
};

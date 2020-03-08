#pragma once

#include "../../../unmapped/EntityRegistry"


class MoveControlSystem : ITickingSystem {

public:
    MoveControlSystem::~MoveControlSystem()
    virtual void tick(EntityRegistry &);

    MoveControlSystem(void);
};

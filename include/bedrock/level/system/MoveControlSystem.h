#pragma once

#include "../../../unmapped/EntityRegistry"


class MoveControlSystem : ITickingSystem {

public:
    virtual MoveControlSystem::~MoveControlSystem()
    virtual void tick(EntityRegistry &);

    MoveControlSystem(void);
};

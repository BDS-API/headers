#pragma once

#include "../../../unmapped/EntityRegistry"


class BehaviorSystem : ITickingSystem {

public:
    BehaviorSystem::~BehaviorSystem()
    virtual void tick(EntityRegistry &);

    BehaviorSystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class BehaviorSystem : ITickingSystem {

public:
    virtual BehaviorSystem::~BehaviorSystem()
    virtual void tick(EntityRegistry &);

    BehaviorSystem(void);
};

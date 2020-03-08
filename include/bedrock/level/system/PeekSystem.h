#pragma once

#include "../../../unmapped/EntityRegistry"


class PeekSystem : ITickingSystem {

public:
    virtual PeekSystem::~PeekSystem()
    virtual void tick(EntityRegistry &);

    PeekSystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class PeekSystem : ITickingSystem {

public:
    PeekSystem::~PeekSystem()
    virtual void tick(EntityRegistry &);

    PeekSystem(void);
};

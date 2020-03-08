#pragma once

#include "../../../unmapped/EntityRegistry"


class CommandBlockSystem : ITickingSystem {

public:
    CommandBlockSystem::~CommandBlockSystem()
    virtual void tick(EntityRegistry &);

    CommandBlockSystem(void);
};

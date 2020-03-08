#pragma once

#include "../../../unmapped/EntityRegistry"


class CommandBlockSystem : ITickingSystem {

public:
    virtual CommandBlockSystem::~CommandBlockSystem()
    virtual void tick(EntityRegistry &);

    CommandBlockSystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class InteractSystem : ITickingSystem {

public:
    InteractSystem::~InteractSystem()
    virtual void tick(EntityRegistry &);

    InteractSystem(void);
};

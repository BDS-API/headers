#pragma once

#include "../../../unmapped/EntityRegistry"


class InteractSystem : ITickingSystem {

public:
    virtual InteractSystem::~InteractSystem()
    virtual void tick(EntityRegistry &);

    InteractSystem(void);
};

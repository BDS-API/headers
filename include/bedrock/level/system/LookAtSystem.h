#pragma once

#include "../../../unmapped/EntityRegistry"


class LookAtSystem : ITickingSystem {

public:
    LookAtSystem::~LookAtSystem()
    virtual void tick(EntityRegistry &);

    LookAtSystem(void);
};

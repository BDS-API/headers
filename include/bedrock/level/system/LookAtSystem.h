#pragma once

#include "../../../unmapped/EntityRegistry"


class LookAtSystem : ITickingSystem {

public:
    virtual LookAtSystem::~LookAtSystem()
    virtual void tick(EntityRegistry &);

    LookAtSystem(void);
};

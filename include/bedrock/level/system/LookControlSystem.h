#pragma once

#include "../../../unmapped/EntityRegistry"


class LookControlSystem : ITickingSystem {

public:
    LookControlSystem::~LookControlSystem()
    virtual void tick(EntityRegistry &);

    LookControlSystem(void);
};

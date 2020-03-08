#pragma once

#include "../../../unmapped/EntityRegistry"


class AngrySystem : ITickingSystem {

public:
    AngrySystem::~AngrySystem()
    virtual void tick(EntityRegistry &);

    AngrySystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class AngrySystem : ITickingSystem {

public:
    virtual AngrySystem::~AngrySystem()
    virtual void tick(EntityRegistry &);

    AngrySystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class DanceSystem : ITickingSystem {

public:
    DanceSystem::~DanceSystem()
    virtual void tick(EntityRegistry &);

    DanceSystem(void);
};

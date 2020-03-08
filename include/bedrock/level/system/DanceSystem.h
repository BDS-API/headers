#pragma once

#include "../../../unmapped/EntityRegistry"


class DanceSystem : ITickingSystem {

public:
    virtual DanceSystem::~DanceSystem()
    virtual void tick(EntityRegistry &);

    DanceSystem(void);
};

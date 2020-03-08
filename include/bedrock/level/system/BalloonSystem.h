#pragma once

#include "../../../unmapped/EntityRegistry"


class BalloonSystem : ITickingSystem {

public:
    BalloonSystem::~BalloonSystem()
    virtual void tick(EntityRegistry &);

    BalloonSystem(void);
};

#pragma once

class BalloonSystem : ITickingSystem {

public:
    virtual BalloonSystem::~BalloonSystem();
    virtual void tick(EntityRegistry &);

    BalloonSystem(void);
};

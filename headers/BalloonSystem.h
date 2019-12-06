#pragma once

class BalloonSystem : ITickingSystem {

public:
    virtual ~BalloonSystem();
    virtual void tick(EntityRegistry &);

    void BalloonSystem(void);
};

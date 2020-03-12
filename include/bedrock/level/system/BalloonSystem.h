#pragma once

#include "ITickingSystem.h"


class BalloonSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BalloonSystem();
    BalloonSystem();
};

#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BalloonSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BalloonSystem();
    BalloonSystem();
};

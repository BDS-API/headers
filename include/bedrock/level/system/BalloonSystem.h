#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BalloonSystem : ITickingSystem {

public:
    virtual ~BalloonSystem();
    virtual void tick(EntityRegistry &);

    BalloonSystem();
};

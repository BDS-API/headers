#pragma once

#include "ITickingSystem.h"


class BurnsInDaylightSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BurnsInDaylightSystem();
    BurnsInDaylightSystem();
};

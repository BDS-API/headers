#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BurnsInDaylightSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BurnsInDaylightSystem();
    BurnsInDaylightSystem();
};

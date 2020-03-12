#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class NavigationSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~NavigationSystem();
    NavigationSystem();
};

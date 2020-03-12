#pragma once

#include "ITickingSystem.h"


class NavigationSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~NavigationSystem();
    NavigationSystem();
};

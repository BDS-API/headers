#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class NavigationSystem : ITickingSystem {

public:
    virtual ~NavigationSystem();
    virtual void tick(EntityRegistry &);

    NavigationSystem();
};

#pragma once

#include "ITickingSystem.h"


class NavigationSystem : ITickingSystem {

public:
    ~NavigationSystem(); // _ZN16NavigationSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN16NavigationSystem4tickER14EntityRegistry
    NavigationSystem(); // _ZN16NavigationSystemC2Ev
};

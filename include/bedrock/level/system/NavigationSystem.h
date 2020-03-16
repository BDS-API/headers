#pragma once

#include "ITickingSystem.h"


class NavigationSystem : public ITickingSystem {

public:
    virtual ~NavigationSystem(); // _ZN16NavigationSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN16NavigationSystem4tickER14EntityRegistry
    NavigationSystem(); // _ZN16NavigationSystemC2Ev
};

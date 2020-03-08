#pragma once

#include "../../../unmapped/EntityRegistry"


class NavigationSystem : ITickingSystem {

public:
    NavigationSystem::~NavigationSystem()
    virtual void tick(EntityRegistry &);

    NavigationSystem(void);
};

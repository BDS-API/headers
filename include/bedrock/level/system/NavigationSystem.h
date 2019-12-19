#pragma once

class NavigationSystem : ITickingSystem {

public:
    virtual NavigationSystem::~NavigationSystem();
    virtual void tick(EntityRegistry &);

    NavigationSystem(void);
};

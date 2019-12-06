#pragma once

class NavigationSystem : ITickingSystem {

public:
    virtual ~NavigationSystem();
    virtual void tick(EntityRegistry &);

    void NavigationSystem(void);
};

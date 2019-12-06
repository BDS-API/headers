#pragma once

class AngrySystem : ITickingSystem {

public:
    virtual ~AngrySystem();
    virtual void tick(EntityRegistry &);

    void AngrySystem(void);
};

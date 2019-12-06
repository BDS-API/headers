#pragma once

class BodyControlSystem : ITickingSystem {

public:
    virtual ~BodyControlSystem();
    virtual void tick(EntityRegistry &);

    void BodyControlSystem(void);
};

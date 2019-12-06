#pragma once

class InteractSystem : ITickingSystem {

public:
    virtual ~InteractSystem();
    virtual void tick(EntityRegistry &);

    void InteractSystem(void);
};

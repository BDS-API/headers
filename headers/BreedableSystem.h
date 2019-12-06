#pragma once

class BreedableSystem : ITickingSystem {

public:
    virtual ~BreedableSystem();
    virtual void tick(EntityRegistry &);

    void BreedableSystem(void);
};

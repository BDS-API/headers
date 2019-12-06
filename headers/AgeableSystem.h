#pragma once

class AgeableSystem : ITickingSystem {

public:
    virtual ~AgeableSystem();
    virtual void tick(EntityRegistry &);

    void AgeableSystem(void);
};

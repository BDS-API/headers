#pragma once

class DwellerSystem : ITickingSystem {

public:
    virtual ~DwellerSystem();
    virtual void tick(EntityRegistry &);

    void DwellerSystem(void);
};

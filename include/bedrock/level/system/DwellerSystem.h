#pragma once

class DwellerSystem : ITickingSystem {

public:
    virtual DwellerSystem::~DwellerSystem();
    virtual void tick(EntityRegistry &);

    DwellerSystem(void);
};

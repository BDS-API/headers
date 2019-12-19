#pragma once

class ScaffoldingClimberSystem : ITickingSystem {

public:
    virtual ScaffoldingClimberSystem::~ScaffoldingClimberSystem();
    virtual void tick(EntityRegistry &);

    ScaffoldingClimberSystem(void);
};

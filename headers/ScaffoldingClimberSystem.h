#pragma once

class ScaffoldingClimberSystem : ITickingSystem {

public:
    virtual ~ScaffoldingClimberSystem();
    virtual void tick(EntityRegistry &);

    void ScaffoldingClimberSystem(void);
};

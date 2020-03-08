#pragma once

#include "../../../unmapped/EntityRegistry"


class ScaffoldingClimberSystem : ITickingSystem {

public:
    virtual ScaffoldingClimberSystem::~ScaffoldingClimberSystem()
    virtual void tick(EntityRegistry &);

    ScaffoldingClimberSystem(void);
};

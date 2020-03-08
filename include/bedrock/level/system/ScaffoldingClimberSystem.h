#pragma once

#include "../../../unmapped/EntityRegistry"


class ScaffoldingClimberSystem : ITickingSystem {

public:
    ScaffoldingClimberSystem::~ScaffoldingClimberSystem()
    virtual void tick(EntityRegistry &);

    ScaffoldingClimberSystem(void);
};

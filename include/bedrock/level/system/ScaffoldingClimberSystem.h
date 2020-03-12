#pragma once

#include "ITickingSystem.h"


class ScaffoldingClimberSystem : ITickingSystem {

public:
    ~ScaffoldingClimberSystem();
    virtual void tick(EntityRegistry &);
    ScaffoldingClimberSystem();
};

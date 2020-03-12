#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class ScaffoldingClimberSystem : ITickingSystem {

public:
    ~ScaffoldingClimberSystem();
    virtual void tick(EntityRegistry &);
    ScaffoldingClimberSystem();
};

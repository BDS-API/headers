#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class ScaffoldingClimberSystem : ITickingSystem {

public:
    virtual ~ScaffoldingClimberSystem();
    virtual void tick(EntityRegistry &);

    ScaffoldingClimberSystem();
};

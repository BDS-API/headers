#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class ScaleByAgeSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~ScaleByAgeSystem();
    ScaleByAgeSystem();
};

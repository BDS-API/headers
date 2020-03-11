#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class ScaleByAgeSystem : ITickingSystem {

public:
    virtual ~ScaleByAgeSystem();
    virtual void tick(EntityRegistry &);

    ScaleByAgeSystem();
};

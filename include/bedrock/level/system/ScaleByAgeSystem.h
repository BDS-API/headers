#pragma once

#include "ITickingSystem.h"


class ScaleByAgeSystem : ITickingSystem {

public:
    ~ScaleByAgeSystem();
    virtual void tick(EntityRegistry &);
    ScaleByAgeSystem();
};

#pragma once

#include "ITickingSystem.h"


class GrowCropSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~GrowCropSystem();
    GrowCropSystem();
};

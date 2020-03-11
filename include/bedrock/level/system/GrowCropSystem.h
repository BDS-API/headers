#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class GrowCropSystem : ITickingSystem {

public:
    virtual ~GrowCropSystem();
    virtual void tick(EntityRegistry &);

    GrowCropSystem();
};

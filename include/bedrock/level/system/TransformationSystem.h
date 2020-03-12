#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class TransformationSystem : ITickingSystem {

public:
    ~TransformationSystem();
    virtual void tick(EntityRegistry &);
    TransformationSystem();
};

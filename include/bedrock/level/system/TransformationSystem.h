#pragma once

#include "ITickingSystem.h"


class TransformationSystem : ITickingSystem {

public:
    ~TransformationSystem();
    virtual void tick(EntityRegistry &);
    TransformationSystem();
};

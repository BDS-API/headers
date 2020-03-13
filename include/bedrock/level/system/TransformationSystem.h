#pragma once

#include "ITickingSystem.h"


class TransformationSystem : ITickingSystem {

public:
    ~TransformationSystem(); // _ZN20TransformationSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN20TransformationSystem4tickER14EntityRegistry
    TransformationSystem(); // _ZN20TransformationSystemC2Ev
};

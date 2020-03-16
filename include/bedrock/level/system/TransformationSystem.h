#pragma once

#include "ITickingSystem.h"


class TransformationSystem : public ITickingSystem {

public:
    virtual ~TransformationSystem(); // _ZN20TransformationSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN20TransformationSystem4tickER14EntityRegistry
    TransformationSystem(); // _ZN20TransformationSystemC2Ev
};

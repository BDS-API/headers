#pragma once

#include "ITickingSystem.h"


class BreakDoorAnnotationSystem : ITickingSystem {

public:
    ~BreakDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);
    BreakDoorAnnotationSystem();
};

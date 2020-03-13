#pragma once

#include "ITickingSystem.h"


class BreakDoorAnnotationSystem : ITickingSystem {

public:
    ~BreakDoorAnnotationSystem(); // _ZN25BreakDoorAnnotationSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN25BreakDoorAnnotationSystem4tickER14EntityRegistry
    BreakDoorAnnotationSystem(); // _ZN25BreakDoorAnnotationSystemC2Ev
};

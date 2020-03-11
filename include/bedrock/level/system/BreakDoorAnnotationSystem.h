#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BreakDoorAnnotationSystem : ITickingSystem {

public:
    virtual ~BreakDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);

    BreakDoorAnnotationSystem();
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class BreakDoorAnnotationSystem : ITickingSystem {

public:
    BreakDoorAnnotationSystem::~BreakDoorAnnotationSystem()
    virtual void tick(EntityRegistry &);

    BreakDoorAnnotationSystem(void);
};

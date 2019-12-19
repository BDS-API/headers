#pragma once

class BreakDoorAnnotationSystem : ITickingSystem {

public:
    virtual BreakDoorAnnotationSystem::~BreakDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);

    BreakDoorAnnotationSystem(void);
};

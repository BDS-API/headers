#pragma once

class BreakDoorAnnotationSystem : ITickingSystem {

public:
    virtual ~BreakDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);

    void BreakDoorAnnotationSystem(void);
};

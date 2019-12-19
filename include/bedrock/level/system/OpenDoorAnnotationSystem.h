#pragma once

class OpenDoorAnnotationSystem : ITickingSystem {

public:
    virtual OpenDoorAnnotationSystem::~OpenDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);

    OpenDoorAnnotationSystem(void);
};

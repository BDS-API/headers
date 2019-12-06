#pragma once

class OpenDoorAnnotationSystem : ITickingSystem {

public:
    virtual ~OpenDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);

    void OpenDoorAnnotationSystem(void);
};

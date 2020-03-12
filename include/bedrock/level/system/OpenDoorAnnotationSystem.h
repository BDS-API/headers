#pragma once

#include "ITickingSystem.h"


class OpenDoorAnnotationSystem : ITickingSystem {

public:
    ~OpenDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);
    OpenDoorAnnotationSystem();
};

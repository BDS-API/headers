#pragma once

#include "ITickingSystem.h"


class OpenDoorAnnotationSystem : ITickingSystem {

public:
    ~OpenDoorAnnotationSystem(); // _ZN24OpenDoorAnnotationSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN24OpenDoorAnnotationSystem4tickER14EntityRegistry
    OpenDoorAnnotationSystem(); // _ZN24OpenDoorAnnotationSystemC2Ev
};

#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class OpenDoorAnnotationSystem : ITickingSystem {

public:
    virtual ~OpenDoorAnnotationSystem();
    virtual void tick(EntityRegistry &);

    OpenDoorAnnotationSystem();
};

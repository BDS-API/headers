#pragma once

#include "../../../unmapped/EntityRegistry"


class OpenDoorAnnotationSystem : ITickingSystem {

public:
    OpenDoorAnnotationSystem::~OpenDoorAnnotationSystem()
    virtual void tick(EntityRegistry &);

    OpenDoorAnnotationSystem(void);
};

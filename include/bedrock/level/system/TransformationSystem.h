#pragma once

#include "../../../unmapped/EntityRegistry"


class TransformationSystem : ITickingSystem {

public:
    TransformationSystem::~TransformationSystem()
    virtual void tick(EntityRegistry &);

    TransformationSystem(void);
};

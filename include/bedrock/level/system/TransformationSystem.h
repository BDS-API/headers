#pragma once

#include "../../../unmapped/EntityRegistry"


class TransformationSystem : ITickingSystem {

public:
    virtual TransformationSystem::~TransformationSystem()
    virtual void tick(EntityRegistry &);

    TransformationSystem(void);
};

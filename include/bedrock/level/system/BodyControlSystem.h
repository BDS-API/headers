#pragma once

#include "../../../unmapped/EntityRegistry"


class BodyControlSystem : ITickingSystem {

public:
    BodyControlSystem::~BodyControlSystem()
    virtual void tick(EntityRegistry &);

    BodyControlSystem(void);
};

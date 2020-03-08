#pragma once

#include "../../../unmapped/EntityRegistry"


class BodyControlSystem : ITickingSystem {

public:
    virtual BodyControlSystem::~BodyControlSystem()
    virtual void tick(EntityRegistry &);

    BodyControlSystem(void);
};

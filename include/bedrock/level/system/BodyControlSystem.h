#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BodyControlSystem : ITickingSystem {

public:
    virtual ~BodyControlSystem();
    virtual void tick(EntityRegistry &);

    BodyControlSystem();
};

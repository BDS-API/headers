#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class AngrySystem : ITickingSystem {

public:
    virtual ~AngrySystem();
    virtual void tick(EntityRegistry &);

    AngrySystem();
};

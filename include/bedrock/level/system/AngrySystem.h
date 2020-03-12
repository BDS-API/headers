#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class AngrySystem : ITickingSystem {

public:
    ~AngrySystem();
    virtual void tick(EntityRegistry &);
    AngrySystem();
};

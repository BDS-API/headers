#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DwellerSystem : ITickingSystem {

public:
    ~DwellerSystem();
    virtual void tick(EntityRegistry &);
    DwellerSystem();
};

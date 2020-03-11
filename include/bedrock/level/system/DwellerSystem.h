#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class DwellerSystem : ITickingSystem {

public:
    virtual ~DwellerSystem();
    virtual void tick(EntityRegistry &);

    DwellerSystem();
};

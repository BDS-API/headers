#pragma once

#include "ITickingSystem.h"


class DwellerSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~DwellerSystem();
    DwellerSystem();
};

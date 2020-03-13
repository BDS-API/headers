#pragma once

#include "ITickingSystem.h"


class DwellerSystem : ITickingSystem {

public:
    ~DwellerSystem(); // _ZN13DwellerSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN13DwellerSystem4tickER14EntityRegistry
    DwellerSystem(); // _ZN13DwellerSystemC2Ev
};

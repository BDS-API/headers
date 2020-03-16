#pragma once

#include "ITickingSystem.h"


class DwellerSystem : public ITickingSystem {

public:
    virtual ~DwellerSystem(); // _ZN13DwellerSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN13DwellerSystem4tickER14EntityRegistry
    DwellerSystem(); // _ZN13DwellerSystemC2Ev
};

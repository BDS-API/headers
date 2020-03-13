#pragma once

#include "ITickingSystem.h"


class AgeableSystem : ITickingSystem {

public:
    ~AgeableSystem(); // _ZN13AgeableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN13AgeableSystem4tickER14EntityRegistry
    AgeableSystem(); // _ZN13AgeableSystemC2Ev
};

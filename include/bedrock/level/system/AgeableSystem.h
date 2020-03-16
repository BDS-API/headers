#pragma once

#include "ITickingSystem.h"


class AgeableSystem : public ITickingSystem {

public:
    virtual ~AgeableSystem(); // _ZN13AgeableSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN13AgeableSystem4tickER14EntityRegistry
    AgeableSystem(); // _ZN13AgeableSystemC2Ev
};

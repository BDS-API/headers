#pragma once

#include "ITickingSystem.h"


class LookAtSystem : public ITickingSystem {

public:
    virtual ~LookAtSystem(); // _ZN12LookAtSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN12LookAtSystem4tickER14EntityRegistry
    LookAtSystem(); // _ZN12LookAtSystemC2Ev
};

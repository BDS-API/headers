#pragma once

#include "ITickingSystem.h"


class BreathableSystem : public ITickingSystem {

public:
    virtual ~BreathableSystem(); // _ZN16BreathableSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN16BreathableSystem4tickER14EntityRegistry
    BreathableSystem(); // _ZN16BreathableSystemC2Ev
};

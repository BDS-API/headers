#pragma once

#include "ITickingSystem.h"


class BreathableSystem : ITickingSystem {

public:
    ~BreathableSystem(); // _ZN16BreathableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN16BreathableSystem4tickER14EntityRegistry
    BreathableSystem(); // _ZN16BreathableSystemC2Ev
};

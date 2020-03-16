#pragma once

#include "ITickingSystem.h"


class LeashableSystem : public ITickingSystem {

public:
    virtual ~LeashableSystem(); // _ZN15LeashableSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN15LeashableSystem4tickER14EntityRegistry
    LeashableSystem(); // _ZN15LeashableSystemC2Ev
};

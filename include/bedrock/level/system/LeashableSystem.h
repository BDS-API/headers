#pragma once

#include "ITickingSystem.h"


class LeashableSystem : ITickingSystem {

public:
    ~LeashableSystem(); // _ZN15LeashableSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN15LeashableSystem4tickER14EntityRegistry
    LeashableSystem(); // _ZN15LeashableSystemC2Ev
};

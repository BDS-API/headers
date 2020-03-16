#pragma once

#include "ITickingSystem.h"


class BribeableSystem : public ITickingSystem {

public:
    virtual ~BribeableSystem(); // _ZN15BribeableSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN15BribeableSystem4tickER14EntityRegistry
    BribeableSystem(); // _ZN15BribeableSystemC2Ev
};

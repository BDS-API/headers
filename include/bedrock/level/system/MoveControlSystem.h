#pragma once

#include "ITickingSystem.h"


class MoveControlSystem : public ITickingSystem {

public:
    virtual ~MoveControlSystem(); // _ZN17MoveControlSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN17MoveControlSystem4tickER14EntityRegistry
    MoveControlSystem(); // _ZN17MoveControlSystemC2Ev
};

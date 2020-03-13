#pragma once

#include "ITickingSystem.h"


class MoveControlSystem : ITickingSystem {

public:
    ~MoveControlSystem(); // _ZN17MoveControlSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN17MoveControlSystem4tickER14EntityRegistry
    MoveControlSystem(); // _ZN17MoveControlSystemC2Ev
};

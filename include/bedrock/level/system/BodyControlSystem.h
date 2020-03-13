#pragma once

#include "ITickingSystem.h"


class BodyControlSystem : ITickingSystem {

public:
    ~BodyControlSystem(); // _ZN17BodyControlSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN17BodyControlSystem4tickER14EntityRegistry
    BodyControlSystem(); // _ZN17BodyControlSystemC2Ev
};

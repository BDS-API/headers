#pragma once

#include "ITickingSystem.h"


class BodyControlSystem : public ITickingSystem {

public:
    virtual ~BodyControlSystem(); // _ZN17BodyControlSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN17BodyControlSystem4tickER14EntityRegistry
    BodyControlSystem(); // _ZN17BodyControlSystemC2Ev
};

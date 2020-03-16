#pragma once

#include "ITickingSystem.h"


class ExplodeSystem : public ITickingSystem {

public:
    virtual ~ExplodeSystem(); // _ZN13ExplodeSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN13ExplodeSystem4tickER14EntityRegistry
    ExplodeSystem(); // _ZN13ExplodeSystemC2Ev
};

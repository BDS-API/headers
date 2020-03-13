#pragma once

#include "ITickingSystem.h"


class ExplodeSystem : ITickingSystem {

public:
    ~ExplodeSystem(); // _ZN13ExplodeSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN13ExplodeSystem4tickER14EntityRegistry
    ExplodeSystem(); // _ZN13ExplodeSystemC2Ev
};

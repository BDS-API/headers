#pragma once

#include "ITickingSystem.h"


class ScaffoldingClimberSystem : ITickingSystem {

public:
    ~ScaffoldingClimberSystem(); // _ZN24ScaffoldingClimberSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN24ScaffoldingClimberSystem4tickER14EntityRegistry
    ScaffoldingClimberSystem(); // _ZN24ScaffoldingClimberSystemC2Ev
};

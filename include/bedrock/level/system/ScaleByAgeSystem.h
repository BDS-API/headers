#pragma once

#include "ITickingSystem.h"


class ScaleByAgeSystem : ITickingSystem {

public:
    ~ScaleByAgeSystem(); // _ZN16ScaleByAgeSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN16ScaleByAgeSystem4tickER14EntityRegistry
    ScaleByAgeSystem(); // _ZN16ScaleByAgeSystemC2Ev
};

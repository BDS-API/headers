#pragma once

#include "ITickingSystem.h"


class ScaleByAgeSystem : public ITickingSystem {

public:
    virtual ~ScaleByAgeSystem(); // _ZN16ScaleByAgeSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN16ScaleByAgeSystem4tickER14EntityRegistry
    ScaleByAgeSystem(); // _ZN16ScaleByAgeSystemC2Ev
};

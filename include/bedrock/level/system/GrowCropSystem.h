#pragma once

#include "ITickingSystem.h"


class GrowCropSystem : public ITickingSystem {

public:
    virtual ~GrowCropSystem(); // _ZN14GrowCropSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN14GrowCropSystem4tickER14EntityRegistry
    GrowCropSystem(); // _ZN14GrowCropSystemC2Ev
};

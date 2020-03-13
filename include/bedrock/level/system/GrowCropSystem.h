#pragma once

#include "ITickingSystem.h"


class GrowCropSystem : ITickingSystem {

public:
    ~GrowCropSystem(); // _ZN14GrowCropSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN14GrowCropSystem4tickER14EntityRegistry
    GrowCropSystem(); // _ZN14GrowCropSystemC2Ev
};

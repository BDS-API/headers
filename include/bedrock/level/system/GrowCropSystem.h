#pragma once

#include "../../../unmapped/EntityRegistry"


class GrowCropSystem : ITickingSystem {

public:
    GrowCropSystem::~GrowCropSystem()
    virtual void tick(EntityRegistry &);

    GrowCropSystem(void);
};

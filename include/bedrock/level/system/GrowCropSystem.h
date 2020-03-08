#pragma once

#include "../../../unmapped/EntityRegistry"


class GrowCropSystem : ITickingSystem {

public:
    virtual GrowCropSystem::~GrowCropSystem()
    virtual void tick(EntityRegistry &);

    GrowCropSystem(void);
};

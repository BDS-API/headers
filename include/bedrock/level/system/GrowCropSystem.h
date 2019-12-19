#pragma once

class GrowCropSystem : ITickingSystem {

public:
    virtual GrowCropSystem::~GrowCropSystem();
    virtual void tick(EntityRegistry &);

    GrowCropSystem(void);
};

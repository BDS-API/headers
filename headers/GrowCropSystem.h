#pragma once

class GrowCropSystem : ITickingSystem {

public:
    virtual ~GrowCropSystem();
    virtual void tick(EntityRegistry &);

    void GrowCropSystem(void);
};

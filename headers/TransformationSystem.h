#pragma once

class TransformationSystem : ITickingSystem {

public:
    virtual ~TransformationSystem();
    virtual void tick(EntityRegistry &);

    void TransformationSystem(void);
};

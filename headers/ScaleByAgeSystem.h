#pragma once

class ScaleByAgeSystem : ITickingSystem {

public:
    virtual ~ScaleByAgeSystem();
    virtual void tick(EntityRegistry &);

    void ScaleByAgeSystem(void);
};

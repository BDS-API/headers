#pragma once

#include "../../../unmapped/EntityRegistry"


class ScaleByAgeSystem : ITickingSystem {

public:
    virtual ScaleByAgeSystem::~ScaleByAgeSystem()
    virtual void tick(EntityRegistry &);

    ScaleByAgeSystem(void);
};

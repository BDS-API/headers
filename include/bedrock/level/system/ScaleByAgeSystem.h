#pragma once

#include "../../../unmapped/EntityRegistry"


class ScaleByAgeSystem : ITickingSystem {

public:
    ScaleByAgeSystem::~ScaleByAgeSystem()
    virtual void tick(EntityRegistry &);

    ScaleByAgeSystem(void);
};

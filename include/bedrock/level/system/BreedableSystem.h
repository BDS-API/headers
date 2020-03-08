#pragma once

#include "../../../unmapped/EntityRegistry"


class BreedableSystem : ITickingSystem {

public:
    BreedableSystem::~BreedableSystem()
    virtual void tick(EntityRegistry &);

    BreedableSystem(void);
};

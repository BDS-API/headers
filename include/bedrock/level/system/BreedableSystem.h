#pragma once

#include "../../../unmapped/EntityRegistry"


class BreedableSystem : ITickingSystem {

public:
    virtual BreedableSystem::~BreedableSystem()
    virtual void tick(EntityRegistry &);

    BreedableSystem(void);
};

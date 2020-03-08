#pragma once

#include "../../../unmapped/EntityRegistry"


class AgeableSystem : ITickingSystem {

public:
    AgeableSystem::~AgeableSystem()
    virtual void tick(EntityRegistry &);

    AgeableSystem(void);
};

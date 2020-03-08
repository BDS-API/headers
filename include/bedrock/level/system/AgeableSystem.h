#pragma once

#include "../../../unmapped/EntityRegistry"


class AgeableSystem : ITickingSystem {

public:
    virtual AgeableSystem::~AgeableSystem()
    virtual void tick(EntityRegistry &);

    AgeableSystem(void);
};

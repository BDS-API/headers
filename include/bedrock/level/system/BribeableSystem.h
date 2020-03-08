#pragma once

#include "../../../unmapped/EntityRegistry"


class BribeableSystem : ITickingSystem {

public:
    virtual BribeableSystem::~BribeableSystem()
    virtual void tick(EntityRegistry &);

    BribeableSystem(void);
};

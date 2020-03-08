#pragma once

#include "../../../unmapped/EntityRegistry"


class BribeableSystem : ITickingSystem {

public:
    BribeableSystem::~BribeableSystem()
    virtual void tick(EntityRegistry &);

    BribeableSystem(void);
};

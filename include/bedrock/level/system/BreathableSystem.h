#pragma once

#include "../../../unmapped/EntityRegistry"


class BreathableSystem : ITickingSystem {

public:
    BreathableSystem::~BreathableSystem()
    virtual void tick(EntityRegistry &);

    BreathableSystem(void);
};

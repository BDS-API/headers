#pragma once

#include "../../../unmapped/EntityRegistry"


class BreathableSystem : ITickingSystem {

public:
    virtual BreathableSystem::~BreathableSystem()
    virtual void tick(EntityRegistry &);

    BreathableSystem(void);
};

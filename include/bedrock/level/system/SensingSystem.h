#pragma once

#include "../../../unmapped/EntityRegistry"


class SensingSystem : ITickingSystem {

public:
    SensingSystem::~SensingSystem()
    virtual void tick(EntityRegistry &);

    SensingSystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class SensingSystem : ITickingSystem {

public:
    virtual SensingSystem::~SensingSystem()
    virtual void tick(EntityRegistry &);

    SensingSystem(void);
};

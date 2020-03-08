#pragma once

#include "../../../unmapped/EntityRegistry"


class DwellerSystem : ITickingSystem {

public:
    DwellerSystem::~DwellerSystem()
    virtual void tick(EntityRegistry &);

    DwellerSystem(void);
};

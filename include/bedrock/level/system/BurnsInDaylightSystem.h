#pragma once

#include "../../../unmapped/EntityRegistry"


class BurnsInDaylightSystem : ITickingSystem {

public:
    virtual BurnsInDaylightSystem::~BurnsInDaylightSystem()
    virtual void tick(EntityRegistry &);

    BurnsInDaylightSystem(void);
};

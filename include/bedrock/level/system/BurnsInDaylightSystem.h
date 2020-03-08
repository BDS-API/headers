#pragma once

#include "../../../unmapped/EntityRegistry"


class BurnsInDaylightSystem : ITickingSystem {

public:
    BurnsInDaylightSystem::~BurnsInDaylightSystem()
    virtual void tick(EntityRegistry &);

    BurnsInDaylightSystem(void);
};

#pragma once

#include "ITickingSystem.h"


class BurnsInDaylightSystem : ITickingSystem {

public:
    ~BurnsInDaylightSystem(); // _ZN21BurnsInDaylightSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN21BurnsInDaylightSystem4tickER14EntityRegistry
    BurnsInDaylightSystem(); // _ZN21BurnsInDaylightSystemC2Ev
};

#pragma once

#include "ITickingSystem.h"


class CommandBlockSystem : ITickingSystem {

public:
    ~CommandBlockSystem(); // _ZN18CommandBlockSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN18CommandBlockSystem4tickER14EntityRegistry
    CommandBlockSystem(); // _ZN18CommandBlockSystemC2Ev
};

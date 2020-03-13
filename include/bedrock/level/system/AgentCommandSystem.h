#pragma once

#include "ITickingSystem.h"


class AgentCommandSystem : ITickingSystem {

public:
    ~AgentCommandSystem(); // _ZN18AgentCommandSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN18AgentCommandSystem4tickER14EntityRegistry
    AgentCommandSystem(); // _ZN18AgentCommandSystemC2Ev
};

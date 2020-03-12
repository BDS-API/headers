#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class AgentCommandSystem : ITickingSystem {

public:
    ~AgentCommandSystem();
    virtual void tick(EntityRegistry &);
    AgentCommandSystem();
};

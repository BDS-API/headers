#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class AgentCommandSystem : ITickingSystem {

public:
    virtual ~AgentCommandSystem();
    virtual void tick(EntityRegistry &);

    AgentCommandSystem();
};

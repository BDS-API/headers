#pragma once

#include "ITickingSystem.h"


class AgentCommandSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~AgentCommandSystem();
    AgentCommandSystem();
};

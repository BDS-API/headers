#pragma once

#include "../../../unmapped/EntityRegistry"


class AgentCommandSystem : ITickingSystem {

public:
    AgentCommandSystem::~AgentCommandSystem()
    virtual void tick(EntityRegistry &);

    AgentCommandSystem(void);
};

#pragma once

#include "../../../unmapped/EntityRegistry"


class AgentCommandSystem : ITickingSystem {

public:
    virtual AgentCommandSystem::~AgentCommandSystem()
    virtual void tick(EntityRegistry &);

    AgentCommandSystem(void);
};

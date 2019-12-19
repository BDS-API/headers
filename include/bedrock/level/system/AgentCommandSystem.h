#pragma once

class AgentCommandSystem : ITickingSystem {

public:
    virtual AgentCommandSystem::~AgentCommandSystem();
    virtual void tick(EntityRegistry &);

    AgentCommandSystem(void);
};

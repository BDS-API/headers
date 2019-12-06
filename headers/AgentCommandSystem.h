#pragma once

class AgentCommandSystem : ITickingSystem {

public:
    virtual ~AgentCommandSystem();
    virtual void tick(EntityRegistry &);

    void AgentCommandSystem(void);
};

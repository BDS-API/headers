#pragma once

class CommandBlockSystem : ITickingSystem {

public:
    virtual ~CommandBlockSystem();
    virtual void tick(EntityRegistry &);

    void CommandBlockSystem(void);
};

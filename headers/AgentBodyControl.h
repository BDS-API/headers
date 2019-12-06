#pragma once

class AgentBodyControl : BodyControl {

public:
    virtual ~AgentBodyControl();
    virtual void clientTick(Mob &);

    void AgentBodyControl(void);
};

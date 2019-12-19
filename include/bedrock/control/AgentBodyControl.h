#pragma once

class AgentBodyControl : BodyControl {

public:
    virtual AgentBodyControl::~AgentBodyControl();
    virtual void clientTick(Mob &);

    AgentBodyControl(void);
};

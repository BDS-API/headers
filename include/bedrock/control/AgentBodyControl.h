#pragma once

#include "../actor/Mob"


class AgentBodyControl : BodyControl {

public:
    virtual AgentBodyControl::~AgentBodyControl()
    virtual void clientTick(Mob &);

    AgentBodyControl(void);
};

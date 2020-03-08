#pragma once

#include "../actor/Mob"


class AgentBodyControl : BodyControl {

public:
    AgentBodyControl::~AgentBodyControl()
    virtual void clientTick(Mob &);

    AgentBodyControl(void);
};

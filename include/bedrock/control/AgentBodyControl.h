#pragma once

#include "BodyControl.h"


class AgentBodyControl : BodyControl {

public:
    ~AgentBodyControl();
    virtual void clientTick(Mob &);
    AgentBodyControl();
};

#pragma once

#include "BodyControl.h"
#include "../actor/Mob.h"


class AgentBodyControl : BodyControl {

public:
    virtual void clientTick(Mob &);
    ~AgentBodyControl();
    AgentBodyControl();
};

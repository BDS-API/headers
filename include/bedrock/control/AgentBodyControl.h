#pragma once

#include "../actor/Mob.h"
#include "./BodyControl.h"


class AgentBodyControl : BodyControl {

public:
    virtual ~AgentBodyControl();
    virtual void clientTick(Mob &);

    AgentBodyControl();
};

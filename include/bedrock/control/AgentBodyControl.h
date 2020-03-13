#pragma once

#include "BodyControl.h"


class AgentBodyControl : BodyControl {

public:
    ~AgentBodyControl(); // _ZN16AgentBodyControlD2Ev
    virtual void clientTick(Mob &); // _ZN16AgentBodyControl10clientTickER3Mob
    AgentBodyControl(); // _ZN16AgentBodyControlC2Ev
};

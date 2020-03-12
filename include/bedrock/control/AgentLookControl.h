#pragma once

#include "LookControl.h"
#include "../actor/Mob.h"


class AgentLookControl : LookControl {

public:
    static long sBaseYMax;

    ~AgentLookControl();
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);
    AgentLookControl();
};

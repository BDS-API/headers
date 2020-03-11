#pragma once

#include "../actor/Mob.h"
#include "./LookControl.h"


class AgentLookControl : LookControl {

public:
    static long sBaseYMax;

    virtual ~AgentLookControl();
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);

    AgentLookControl();
};

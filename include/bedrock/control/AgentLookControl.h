#pragma once

#include "LookControl.h"


class AgentLookControl : LookControl {

public:
    static long sBaseYMax;

    virtual void initializeInternal(Mob &);
    ~AgentLookControl();
    virtual void tick(Mob &);
    AgentLookControl();
};

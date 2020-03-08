#pragma once

#include "../actor/Mob"


class AgentLookControl : LookControl {

public:
    static long sBaseYMax;

    virtual AgentLookControl::~AgentLookControl()
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);

    AgentLookControl(void);
};

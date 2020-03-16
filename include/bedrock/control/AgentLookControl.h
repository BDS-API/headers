#pragma once

#include "LookControl.h"


class AgentLookControl : public LookControl {

public:
    static long sBaseYMax;

    virtual ~AgentLookControl(); // _ZN16AgentLookControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void initializeInternal(Mob &); // _ZN16AgentLookControl18initializeInternalER3Mob
    virtual void tick(Mob &); // _ZN16AgentLookControl4tickER3Mob
    AgentLookControl(); // _ZN16AgentLookControlC2Ev
};

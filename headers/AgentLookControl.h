#pragma once

class AgentLookControl : LookControl {

public:
    static long AgentLookControl::sBaseYMax;

    virtual ~AgentLookControl();
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);

    void AgentLookControl(void);
};

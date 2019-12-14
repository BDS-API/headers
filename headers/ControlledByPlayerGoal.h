#pragma once

class ControlledByPlayerGoal : Goal {

public:
    virtual ~ControlledByPlayerGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void ControlledByPlayerGoal(Mob &);
    void _canBeControlledByRider(void);
};

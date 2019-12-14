#pragma once

class OcelotAttackGoal : Goal {

public:
    virtual ~OcelotAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void OcelotAttackGoal(Mob &, float, float, float);
};

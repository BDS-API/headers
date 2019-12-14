#pragma once

class SlimeAttackGoal : Goal {

public:
    virtual ~SlimeAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SlimeAttackGoal(Mob &);
};

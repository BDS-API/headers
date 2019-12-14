#pragma once

class FloatGoal : Goal {

public:
    virtual ~FloatGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void FloatGoal(Mob &);
};

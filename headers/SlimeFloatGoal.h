#pragma once

class SlimeFloatGoal : Goal {

public:
    virtual ~SlimeFloatGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SlimeFloatGoal(Mob &);
};

#pragma once

class SlimeKeepOnJumpingGoal : Goal {

public:
    virtual ~SlimeKeepOnJumpingGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SlimeKeepOnJumpingGoal(Mob &);
};

#pragma once

class SlimeRandomDirectionGoal : Goal {

public:
    virtual SlimeRandomDirectionGoal::~SlimeRandomDirectionGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SlimeRandomDirectionGoal(Mob &);
};

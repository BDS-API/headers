#pragma once

class SlimeRandomDirectionGoal : Goal {

public:
    virtual ~SlimeRandomDirectionGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SlimeRandomDirectionGoal(Mob &);
};

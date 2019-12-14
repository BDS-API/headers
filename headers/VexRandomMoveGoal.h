#pragma once

class VexRandomMoveGoal : Goal {

public:
    virtual ~VexRandomMoveGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void VexRandomMoveGoal(Mob &);
};

#pragma once

#include "../Mob"
#include "../../../unmapped/Vec3"


class FindCoverGoal : Goal {

public:
    virtual FindCoverGoal::~FindCoverGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    FindCoverGoal(Mob &, float, float);
    void getHidePos(Vec3 *)const;
    void getMob(void)const;
};

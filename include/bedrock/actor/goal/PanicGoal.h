#pragma once

#include "../Mob"
#include "../../../unmapped/Vec3"


class PanicGoal : Goal {

public:
    virtual PanicGoal::~PanicGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    PanicGoal(Mob &, float, bool, bool, bool);
    void _findWaterPos(Vec3 &, int, int);
};

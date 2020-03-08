#pragma once

#include "../Mob"


class RaiderCelebrationGoal : Goal {

public:
    virtual RaiderCelebrationGoal::~RaiderCelebrationGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    RaiderCelebrationGoal(Mob &, LevelSoundEvent, FloatRange, FloatRange, float, DefinitionTrigger const&);
};

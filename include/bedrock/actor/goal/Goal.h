#pragma once

#include "../../../unmapped/Dimension"
#include "../Player"


class Goal {

public:
    virtual Goal::~Goal()
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual bool isTargetGoal()const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);

    Goal(void);
    void setRequiredControlFlags(int);
    void getRequiredControlFlags()const;
};

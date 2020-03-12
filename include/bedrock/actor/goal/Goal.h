#pragma once

#include "../../../unmapped/Dimension.h"
#include "../Player.h"


class Goal {

public:
    virtual void start();
    virtual bool isTargetGoal()const;
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual bool canBeInterrupted();
    virtual void tick();
    virtual void stop();
    virtual bool canContinueToUse();
    ~Goal();
    Goal();
    void getRequiredControlFlags()const;
    void setRequiredControlFlags(int);
};

#pragma once

#include "../Player.h"
#include "../../../unmapped/Dimension.h"


class Goal {

public:
    virtual ~Goal();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual bool isTargetGoal()const;
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition

    Goal();
    void setRequiredControlFlags(int);
    void getRequiredControlFlags()const;
};

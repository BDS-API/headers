#pragma once

class Goal {

public:
    virtual ~Goal();
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual bool isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);

    void Goal(void);
    void setRequiredControlFlags(int);
    void getRequiredControlFlags(void)const;
};

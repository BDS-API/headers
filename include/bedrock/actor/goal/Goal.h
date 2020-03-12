#pragma once



class Goal {

public:
    virtual bool canContinueToUse();
    virtual bool isTargetGoal()const;
    virtual void stop();
    virtual void tick();
    ~Goal();
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual void start();
    virtual bool canBeInterrupted();
    Goal();
    void getRequiredControlFlags()const;
    void setRequiredControlFlags(int);
};

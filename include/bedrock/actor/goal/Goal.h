#pragma once



class Goal {

public:
    virtual ~Goal(); // _ZN4GoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canContinueToUse(); // _ZN4Goal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN4Goal16canBeInterruptedEv
    virtual void start(); // _ZN4Goal5startEv
    virtual void stop(); // _ZN4Goal4stopEv
    virtual void tick(); // _ZN4Goal4tickEv
    virtual bool isTargetGoal()const; // _ZNK4Goal12isTargetGoalEv
    virtual void onPlayerDimensionChanged__incomplete0(Player *, long); //TODO: incomplete function definition // _ZN4Goal24onPlayerDimensionChangedEP6Player11AutomaticIDI9DimensioniE
    Goal(); // _ZN4GoalC2Ev
    void setRequiredControlFlags(int); // _ZN4Goal23setRequiredControlFlagsEi
    void getRequiredControlFlags()const; // _ZNK4Goal23getRequiredControlFlagsEv
};

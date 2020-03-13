#pragma once

#include <memory>


class PrioritizedGoal {

public:
    PrioritizedGoal(int, std::unique_ptr<Goal>); // _ZN15PrioritizedGoalC2EiSt10unique_ptrI4GoalSt14default_deleteIS1_EE
    PrioritizedGoal(PrioritizedGoal &&); // _ZN15PrioritizedGoalC2EOS_
    ~PrioritizedGoal(); // _ZN15PrioritizedGoalD2Ev
    void getPriority()const; // _ZNK15PrioritizedGoal11getPriorityEv
    void setPriority(int); // _ZN15PrioritizedGoal11setPriorityEi
    void getUsed()const; // _ZNK15PrioritizedGoal7getUsedEv
    void setUsed(bool); // _ZN15PrioritizedGoal7setUsedEb
    void getToStart()const; // _ZNK15PrioritizedGoal10getToStartEv
    void setToStart(bool); // _ZN15PrioritizedGoal10setToStartEb
};

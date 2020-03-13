#pragma once

#include <string>
#include <memory>


class GoalSelectorComponent {

public:
    ~GoalSelectorComponent(); // _ZN21GoalSelectorComponentD2Ev
    GoalSelectorComponent(GoalSelectorComponent &&); // _ZN21GoalSelectorComponentC2EOS_
    GoalSelectorComponent(); // _ZN21GoalSelectorComponentC2Ev
    void getTargetGoals(); // _ZN21GoalSelectorComponent14getTargetGoalsEv
    void getNormalGoals(); // _ZN21GoalSelectorComponent14getNormalGoalsEv
    void addGoal(int, std::unique_ptr<Goal>); // _ZN21GoalSelectorComponent7addGoalEiSt10unique_ptrI4GoalSt14default_deleteIS1_EE
    void removeGoal(Goal *); // _ZN21GoalSelectorComponent10removeGoalEP4Goal
    void clearAllGoals(); // _ZN21GoalSelectorComponent13clearAllGoalsEv
    void clearTargetGoals(); // _ZN21GoalSelectorComponent16clearTargetGoalsEv
    void clearNormalGoals(); // _ZN21GoalSelectorComponent16clearNormalGoalsEv
    void stopAllGoals(); // _ZN21GoalSelectorComponent12stopAllGoalsEv
    void stopTargetGoals(); // _ZN21GoalSelectorComponent15stopTargetGoalsEv
    void stopNormalGoals(); // _ZN21GoalSelectorComponent15stopNormalGoalsEv
    void buildDebugInfo(std::string &)const; // _ZNK21GoalSelectorComponent14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN21GoalSelectorComponent24onPlayerDimensionChangedEP6Player11AutomaticIDI9DimensioniE
};

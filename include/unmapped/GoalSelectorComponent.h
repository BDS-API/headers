#pragma once

#include <memory>
#include <string>


class GoalSelectorComponent {

public:
    void removeGoal(Goal *);
    void buildDebugInfo(std::string &)const;
    void getNormalGoals();
    void getTargetGoals();
    GoalSelectorComponent();
    void clearTargetGoals();
    void addGoal(int, std::unique_ptr<Goal>);
    void clearNormalGoals();
    void stopTargetGoals();
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void clearAllGoals();
    void stopNormalGoals();
    ~GoalSelectorComponent();
    void stopAllGoals();
    GoalSelectorComponent(GoalSelectorComponent &&);
};

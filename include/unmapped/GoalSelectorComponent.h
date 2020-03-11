#pragma once

#include <memory>
#include "./Dimension.h"
#include "./GoalSelectorComponent.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/goal/Goal.h"
#include <string>


class GoalSelectorComponent {

public:

    ~GoalSelectorComponent();
    GoalSelectorComponent(GoalSelectorComponent &&);
    GoalSelectorComponent();
    void getTargetGoals();
    void getNormalGoals();
    void addGoal(int, std::unique_ptr<Goal, std::default_delete<Goal>>);
    void removeGoal(Goal *);
    void clearAllGoals();
    void clearTargetGoals();
    void clearNormalGoals();
    void stopAllGoals();
    void stopTargetGoals();
    void stopNormalGoals();
    void buildDebugInfo(std::string &)const;
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
};

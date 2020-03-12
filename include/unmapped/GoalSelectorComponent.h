#pragma once

#include "../bedrock/actor/Player.h"
#include <string>
#include "../bedrock/actor/goal/Goal.h"
#include "Dimension.h"
#include <memory>


class GoalSelectorComponent {

public:
    GoalSelectorComponent();
    void getNormalGoals();
    void stopTargetGoals();
    void removeGoal(Goal *);
    void buildDebugInfo(std::string &)const;
    void clearNormalGoals();
    void stopAllGoals();
    void addGoal(int, std::unique_ptr<Goal>);
    void clearAllGoals();
    ~GoalSelectorComponent();
    void stopNormalGoals();
    void clearTargetGoals();
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    GoalSelectorComponent(GoalSelectorComponent &&);
    void getTargetGoals();
};

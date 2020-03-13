#pragma once

#include <vector>


namespace GoalSelectorUtility {

    bool canCoExist(PrioritizedGoal &, PrioritizedGoal &); // _ZN19GoalSelectorUtility10canCoExistER15PrioritizedGoalS1_
    bool canUseInSystem(PrioritizedGoal &, std::vector<PrioritizedGoal> &); // _ZN19GoalSelectorUtility14canUseInSystemER15PrioritizedGoalRSt6vectorIS0_SaIS0_EE
    void tryStartGoals(std::vector<PrioritizedGoal> &); // _ZN19GoalSelectorUtility13tryStartGoalsERSt6vectorI15PrioritizedGoalSaIS1_EE
};

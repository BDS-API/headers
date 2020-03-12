#pragma once

#include "PrioritizedGoal.h"
#include <vector>


namespace GoalSelectorUtility {

    void tryStartGoals(std::vector<PrioritizedGoal> &);
    bool canUseInSystem(PrioritizedGoal &, std::vector<PrioritizedGoal> &);
    bool canCoExist(PrioritizedGoal &, PrioritizedGoal &);
};

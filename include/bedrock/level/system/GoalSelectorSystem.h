#pragma once

#include "ITickingSystem.h"
#include <vector>


class GoalSelectorSystem : public ITickingSystem {

public:
    virtual ~GoalSelectorSystem(); // _ZN18GoalSelectorSystemD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(EntityRegistry &); // _ZN18GoalSelectorSystem4tickER14EntityRegistry
    GoalSelectorSystem(); // _ZN18GoalSelectorSystemC2Ev
//    void _tickGoalSelectorComponent(long &); //TODO: incomplete function definition // _ZN18GoalSelectorSystem26_tickGoalSelectorComponentER20ViewedEntityContextTI13EntityContextJ13FlagComponentI15ActorTickedFlagE14ActorComponent21GoalSelectorComponentEE
    void _tickGoal(std::vector<PrioritizedGoal> &); // _ZN18GoalSelectorSystem9_tickGoalERSt6vectorI15PrioritizedGoalSaIS1_EE
};

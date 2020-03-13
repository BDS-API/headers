#pragma once

#include "ITickingSystem.h"
#include <vector>


class GoalSelectorSystem : ITickingSystem {

public:
    ~GoalSelectorSystem(); // _ZN18GoalSelectorSystemD2Ev
    virtual void tick(EntityRegistry &); // _ZN18GoalSelectorSystem4tickER14EntityRegistry
    GoalSelectorSystem(); // _ZN18GoalSelectorSystemC2Ev
//  void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &); //TODO: incomplete function definition // _ZN18GoalSelectorSystem26_tickGoalSelectorComponentER20ViewedEntityContextTI13EntityContextJ13FlagComponentI15ActorTickedFlagE14ActorComponent21GoalSelectorComponentEE
    void _tickGoal(std::vector<PrioritizedGoal> &); // _ZN18GoalSelectorSystem9_tickGoalERSt6vectorI15PrioritizedGoalSaIS1_EE
};

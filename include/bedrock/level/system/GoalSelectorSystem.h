#pragma once

#include "ITickingSystem.h"
#include <vector>


class GoalSelectorSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~GoalSelectorSystem();
    GoalSelectorSystem();
//  void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &); //TODO: incomplete function definition
    void _tickGoal(std::vector<PrioritizedGoal> &);
};

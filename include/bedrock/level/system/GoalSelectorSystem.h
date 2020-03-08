#pragma once

#include "../../../unmapped/PrioritizedGoal"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/EntityContext"
#include "../../../unmapped/GoalSelectorComponent"
#include "../../actor/unmapped/ActorComponent"


class GoalSelectorSystem : ITickingSystem {

public:
    GoalSelectorSystem::~GoalSelectorSystem()
    virtual void tick(EntityRegistry &);

    GoalSelectorSystem(void);
    void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &);
    void _tickGoal(std::vector<PrioritizedGoal, std::allocator<PrioritizedGoal>> &);
};

#pragma once

#include "./ITickingSystem.h"
#include "../../../unmapped/PrioritizedGoal.h"
#include "../../../unmapped/GoalSelectorComponent.h"
#include "../../actor/unmapped/ActorComponent.h"
#include <memory>
#include "../../../unmapped/EntityRegistry.h"
#include "../../../unmapped/EntityContext.h"
#include <vector>


class GoalSelectorSystem : ITickingSystem {

public:
    virtual ~GoalSelectorSystem();
    virtual void tick(EntityRegistry &);

    GoalSelectorSystem();
//  void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &); //TODO: incomplete function definition
    void _tickGoal(std::vector<PrioritizedGoal, std::allocator<PrioritizedGoal>> &);
};

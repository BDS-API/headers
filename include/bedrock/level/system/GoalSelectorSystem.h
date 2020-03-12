#pragma once

#include "../../../unmapped/PrioritizedGoal.h"
#include "../../actor/unmapped/ActorComponent.h"
#include "../../../unmapped/GoalSelectorComponent.h"
#include "ITickingSystem.h"
#include "../../../unmapped/EntityContext.h"
#include <vector>
#include "../../../unmapped/EntityRegistry.h"


class GoalSelectorSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~GoalSelectorSystem();
    void _tickGoal(std::vector<PrioritizedGoal> &);
//  void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &); //TODO: incomplete function definition
    GoalSelectorSystem();
};

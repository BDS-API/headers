#pragma once

class GoalSelectorSystem : ITickingSystem {

public:
    virtual ~GoalSelectorSystem();
    virtual void tick(EntityRegistry &);

    void GoalSelectorSystem(void);
    void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &);
    void _tickGoal(std::vector<PrioritizedGoal, std::allocator<PrioritizedGoal>> &);
};

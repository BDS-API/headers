#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/actor/goal/Goal"


class GoalSelectorComponent {

public:

    GoalSelectorComponent(GoalSelectorComponent&&);
    GoalSelectorComponent(void);
    void getTargetGoals();
    void getNormalGoals();
    void addGoal(int, std::unique_ptr<Goal, std::default_delete<Goal>>);
    void removeGoal(Goal *);
    void clearAllGoals();
    void clearTargetGoals();
    void clearNormalGoals();
    void stopAllGoals();
    void stopTargetGoals();
    void stopNormalGoals();
    void buildDebugInfo(std::string &)const;
    void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
};

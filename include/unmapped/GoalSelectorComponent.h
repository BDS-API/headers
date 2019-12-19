#pragma once

class GoalSelectorComponent {

public:

    GoalSelectorComponent(GoalSelectorComponent&&);
    GoalSelectorComponent(void);
    void getTargetGoals(void);
    void getNormalGoals(void);
    void addGoal(int, std::unique_ptr<Goal, std::default_delete<Goal>>);
    void removeGoal(Goal *);
    void clearAllGoals(void);
    void clearTargetGoals(void);
    void clearNormalGoals(void);
    void stopAllGoals(void);
    void stopTargetGoals(void);
    void stopNormalGoals(void);
    void buildDebugInfo(std::string &)const;
    void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
};

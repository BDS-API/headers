#pragma once

class GoalSelectorComponent {

public:

    void GoalSelectorComponent(GoalSelectorComponent&&);
    void GoalSelectorComponent(void);
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
    void buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
};

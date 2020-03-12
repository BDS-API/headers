#pragma once

#include <string>


class GoalDefinition {

public:
    static std::string mGoalMap;

    GoalDefinition();
    GoalDefinition(GoalDefinition const&);
    GoalDefinition(GoalDefinition &&);
    ~GoalDefinition();
    void _getPOITypeFromString(std::string);
    void GoalExists(std::string const&);
    void init();
    void _getTargetSelectionMethodFromString(std::string const&);
    void CreateGoal(Mob &, GoalDefinition const&);
    void parse(Json::Value &, int);
    void shutdown();
};

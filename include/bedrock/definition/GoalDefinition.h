#pragma once

#include "../../json/Value"
#include "../actor/Mob"


class GoalDefinition {

public:
    static long mGoalMap[abi:cxx11];


    GoalDefinition(void);
    GoalDefinition(GoalDefinition const&);
    GoalDefinition(GoalDefinition&&);
    void parse(Json::Value &, int);
    void _getTargetSelectionMethodFromString(std::string const&);
    void _getPOITypeFromString(std::string);
    void CreateGoal(Mob &, GoalDefinition const&);
    void GoalExists(std::string const&);
    void init();
    void shutdown();
};

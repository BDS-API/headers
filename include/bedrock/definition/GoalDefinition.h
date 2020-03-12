#pragma once

#include "../../json/Value.h"
#include <string>
#include "../actor/Mob.h"


class GoalDefinition {

public:
    static std::string mGoalMap;

    void _getTargetSelectionMethodFromString(std::string const&);
    GoalDefinition(GoalDefinition &&);
    ~GoalDefinition();
    void _getPOITypeFromString(std::string);
    void parse(Json::Value &, int);
    void shutdown();
    GoalDefinition(GoalDefinition const&);
    void GoalExists(std::string const&);
    void init();
    void CreateGoal(Mob &, GoalDefinition const&);
    GoalDefinition();
};

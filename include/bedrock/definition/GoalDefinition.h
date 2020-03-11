#pragma once

#include "../actor/Mob.h"
#include "./GoalDefinition.h"
#include "../../json/Value.h"
#include <string>


class GoalDefinition {

public:
    static std::string mGoalMap;


    ~GoalDefinition();
    GoalDefinition();
    GoalDefinition(GoalDefinition const&);
    GoalDefinition(GoalDefinition &&);
    void parse(Json::Value &, int);
    void _getTargetSelectionMethodFromString(std::string const&);
    void _getPOITypeFromString(std::string);
    void CreateGoal(Mob &, GoalDefinition const&);
    void GoalExists(std::string const&);
    void init();
    void shutdown();
};

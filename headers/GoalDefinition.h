#pragma once

class GoalDefinition {

public:
    static long GoalDefinition::mGoalMap[abi:cxx11];


    void GoalDefinition(void);
    void GoalDefinition(GoalDefinition const&);
    void GoalDefinition(GoalDefinition&&);
    void parse(Json::Value &, int);
    void _getTargetSelectionMethodFromString(std::string const&);
    void _getPOITypeFromString(std::string);
    void CreateGoal(Mob &, GoalDefinition const&);
    void GoalExists(std::string const&);
    void init(void);
    void shutdown(void);
};

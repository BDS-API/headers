#pragma once

#include <string>


class GoalDefinition {

public:
    static std::string mGoalMap;

    ~GoalDefinition(); // _ZN14GoalDefinitionD2Ev
    GoalDefinition(); // _ZN14GoalDefinitionC2Ev
    GoalDefinition(GoalDefinition const&); // _ZN14GoalDefinitionC2ERKS_
    GoalDefinition(GoalDefinition &&); // _ZN14GoalDefinitionC2EOS_
    void parse(Json::Value &, int); // _ZN14GoalDefinition5parseERN4Json5ValueEi
    void _getTargetSelectionMethodFromString(std::string const&); // _ZN14GoalDefinition35_getTargetSelectionMethodFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getPOITypeFromString(std::string); // _ZN14GoalDefinition21_getPOITypeFromStringENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void CreateGoal(Mob &, GoalDefinition const&); // _ZN14GoalDefinition10CreateGoalER3MobRKS_
    void GoalExists(std::string const&); // _ZN14GoalDefinition10GoalExistsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void init(); // _ZN14GoalDefinition4initEv
    void shutdown(); // _ZN14GoalDefinition8shutdownEv
};

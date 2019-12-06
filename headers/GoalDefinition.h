#pragma once

class GoalDefinition {

public:

    void GoalDefinition(void);
    void GoalDefinition(GoalDefinition const&);
    void GoalDefinition(GoalDefinition&&);
    void parse(Json::Value &, int);
    void CreateGoal(Mob &, GoalDefinition const&);
    void GoalExists(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void init(void);
    void shutdown(void);
};

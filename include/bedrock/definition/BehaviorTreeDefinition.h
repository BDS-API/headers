#pragma once

#include <string>


class BehaviorTreeDefinition {

public:
    std::string getName()const;
    BehaviorTreeDefinition(std::string const&);
    ~BehaviorTreeDefinition();
    void getRoot()const;
    std::string getStringInput()const;
};

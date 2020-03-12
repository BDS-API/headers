#pragma once

#include <string>


class BehaviorTreeDefinition {

public:
    std::string getStringInput()const;
    void getRoot()const;
    std::string getName()const;
    ~BehaviorTreeDefinition();
    BehaviorTreeDefinition(std::string const&);
};

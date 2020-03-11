#pragma once

#include <string>


class BehaviorTreeDefinition {

public:

    ~BehaviorTreeDefinition();
    BehaviorTreeDefinition(std::string const&);
    std::string getName()const;
    void getRoot()const;
    std::string getStringInput()const;
};
